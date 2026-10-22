/*
 * FUN_004D2E00 — Database constructor (stream-based).
 *
 * Allocates a 0x20-byte Database object, opens two archives via
 * FUN_00414820 (open_from_stream), initializes the object, and registers
 * it on the owning object's list at owner->field_14 via FUN_00416F20.
 *
 * __thiscall (ECX = owner), RET 0x1C (7 stack params = 28 bytes).
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* ---- external globals ---- */
extern void * DAT_007b8c10;

/* ---- external functions ---- */
void * __stdcall FUN_004084d0(int size);
void * __stdcall FUN_00414820(void *this_0x2c, void *stream, const char *name, void *param);
void   __stdcall FUN_00415180(void *this_0x20, void *param);
void   __stdcall FUN_00416f20(void *this_listnode, void *obj);
void   __stdcall FUN_004179b0(void *this_field_2c, void *obj);

__declspec(naked) void __stdcall database_ctor_stream(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, ecx                    /* EDI = owner */
        push    0x20
        mov     dword ptr [esp + 0x0c], edi /* save owner to local */
        call    FUN_004084d0                /* alloc(0x20) */
        mov     esi, eax                    /* ESI = new Database obj */
        add     esp, 0x4
        test    esi, esi
        jz      l_alloc_failed

        /* Allocate and open first archive (param_3 / name1) */
        mov     edi, dword ptr [esp + 0x18] /* EDI = param_3 (name1) */
        test    edi, edi
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x28] /* EBP = param_5 (word) */
        jz      l_archive1_null

        push    0x2c
        call    FUN_004084d0                /* alloc(0x2c) */
        add     esp, 0x4
        test    eax, eax
        jz      l_archive1_null

        mov     ecx, dword ptr [esp + 0x18] /* ECX = param_1 (stream1) */
        push    ebp                         /* param_5 (word) */
        push    ecx                         /* param_1 (stream1) */
        push    edi                         /* param_3 (name1) */
        mov     ecx, eax                    /* this for open_from_stream */
        call    FUN_00414820                /* open_from_stream */
        mov     ebx, eax                    /* EBX = archive handle 1 */
        jmp     l_archive1_done

l_archive1_null:
        xor     ebx, ebx                    /* EBX = 0 */

l_archive1_done:
        /* Allocate and open second archive (param_4 / name2) */
        push    0x2c
        call    FUN_004084d0                /* alloc(0x2c) */
        add     esp, 0x4
        test    eax, eax
        jz      l_archive2_null

        mov     edx, dword ptr [esp + 0x18] /* EDX = param_2 (stream2) */
        mov     ecx, dword ptr [esp + 0x1c] /* ECX = param_4 (name2) */
        push    ebp                         /* param_5 (word) */
        push    edx                         /* param_2 (stream2) */
        push    ecx                         /* param_4 (name2) */
        mov     ecx, eax                    /* this for open_from_stream */
        call    FUN_00414820                /* open_from_stream */
        mov     ebp, eax                    /* EBP = archive handle 2 */
        jmp     l_archive2_done

l_archive2_null:
        xor     ebp, ebp                    /* EBP = 0 */

l_archive2_done:
        /* Initialize the Database object */
        mov     edx, dword ptr [DAT_007b8c10]
        mov     edi, dword ptr [esp + 0x24] /* EDI = param_4 (word) */
        push    edx                         /* param for FUN_00415180 */
        mov     ecx, esi                    /* this = new Database obj */
        call    FUN_00415180

        xor     eax, eax
        mov     dword ptr [esi + 0x08], eax /* field_08 = 0 */
        mov     dword ptr [esi + 0x0c], eax /* field_0C = 0 */
        mov     al, byte ptr [esp + 0x30]   /* AL = param_7 (byte) */
        mov     dword ptr [esi + 0x10], ebp /* field_10 = archive handle 2 */
        pop     ebp
        mov     dword ptr [esi + 0x14], ebx /* field_14 = archive handle 1 */
        mov     word ptr [esi + 0x1a], di   /* field_1A = param_4 (word) */
        mov     edi, dword ptr [esp + 0x0c] /* EDI = owner (restored) */
        mov     word ptr [esi + 0x18], 0xffff /* field_18 = 0xFFFF */
        mov     byte ptr [esi + 0x1c], al   /* field_1C = param_7 */
        mov     dword ptr [esi], 0x77260c   /* vtable = 0x77260C */
        pop     ebx
        jmp     l_register

l_alloc_failed:
        xor     esi, esi                    /* ESI = NULL */

l_register:
        /* Register on owner's list */
        lea     ecx, [esp + 0x1c]           /* &param_4 on stack */
        push    ecx
        push    esi                         /* Database obj */
        lea     ecx, [edi + 0x14]           /* &owner->field_14 */
        call    FUN_00416f20                /* list-insert */

        /* Conditional init at owner+0x2C */
        mov     al, byte ptr [esp + 0x24]   /* AL = param_6 (char) */
        test    al, al
        jnz     l_skip_init

        push    esi                         /* Database obj */
        lea     ecx, [edi + 0x2c]           /* &owner->field_2C */
        call    FUN_004179b0

l_skip_init:
        pop     edi
        mov     eax, esi                    /* return Database obj */
        pop     esi
        pop     ecx
        ret     0x1c
    }
}
