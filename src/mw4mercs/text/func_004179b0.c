/*
 * FUN_004179B0 (55 B) — Sub-object initializer at owner+0x2C.
 *
 * Called by Database constructors (database_ctor_path, database_ctor_stream)
 * when param_5 == 0. Initializes/links a sub-object at owner+0x2C.
 *
 * The sub-object at owner+0x2C manages a singly-linked list of nodes:
 *   subobj+0x00: head pointer (first node in list)
 *   subobj+0x04: tail pointer (last node in list)
 *
 * Each node has the layout (initialized by FUN_004178D0):
 *   node+0x00: field_00 (always 0)
 *   node+0x04: field_04 (database object pointer)
 *   node+0x08: field_08 (previous tail, or 0 if first node)
 *   node+0x0C: field_0C (this sub-object pointer)
 *
 * Algorithm:
 *   1. Gets a node from the global pool (FUN_00416110, ECX = pool at 0x7B8C20)
 *   2. If node obtained, calls FUN_004178D0(node, this, database_obj, 0, this->tail)
 *      to initialize the node and link it after the current tail
 *   3. Stores the node (or 0) into this->tail (field_04)
 *   4. If this->head (field_00) is NULL, also sets head to the node
 *
 * __thiscall (ECX = &owner->field_2C), 1 stack param (database object), RET 4.
 * CFLAGS: /O1
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00416110(void);
extern void __stdcall FUN_004178D0(void);

/* Global pool manager object at 0x007B8C20 */
extern int g_pool_manager;

__declspec(naked) void __stdcall subobj_init_2c(void)
{
    __asm {
        push    esi
        mov     esi, ecx                    ; ESI = this (sub-object at owner+0x2C)

        ; Get a node from the global pool
        mov     ecx, dword ptr [g_pool_manager] ; ECX = global pool manager
        call    FUN_00416110                ; EAX = new node (or 0)

        test    eax, eax
        jz      l_null                      ; if no node, skip init

        ; Initialize the node via FUN_004178D0
        mov     ecx, dword ptr [esi + 4]    ; ECX = this->field_04 (previous tail)
        mov     edx, dword ptr [esp + 8]    ; EDX = stack param (database object)
        push    ecx                         ; param_4 = previous tail
        push    0x0                         ; param_3 = 0
        push    edx                         ; param_2 = database object
        push    esi                         ; param_1 = this (sub-object)
        mov     ecx, eax                    ; ECX = new node (this for FUN_004178D0)
        call    FUN_004178D0
        jmp     l_done

    l_null:
        xor     eax, eax                    ; EAX = 0

    l_done:
        ; Store the node (or 0) into this->field_04 (tail)
        cmp     dword ptr [esi], 0x0        ; if this->field_00 (head) == 0
        mov     dword ptr [esi + 4], eax    ; this->field_04 = EAX (tail)
        jnz     l_ret                       ; if head != 0, skip
        mov     dword ptr [esi], eax        ; this->field_00 = EAX (set head)

    l_ret:
        pop     esi
        ret     4
    }
}
