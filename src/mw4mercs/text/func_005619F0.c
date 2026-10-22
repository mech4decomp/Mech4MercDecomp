/*
 * FUN_005619F0 (45 B) — __thiscall method. Builds a temporary struct on the
 * stack, calls FUN_00561A30 to copy arg2 into it, then calls FUN_00561AF0
 * with this and &arg3. Stores the dereferenced return value through arg1.
 * __thiscall (ecx = this, ret 0xC cleans 3 stack args).
 * CFLAGS: /O1
 */

extern void __fastcall FUN_00561a30(void);  /* ecx = this, stack = &arg2 */
extern void * __fastcall FUN_00561af0(void); /* ecx = this, stack = args */

__declspec(naked) void __stdcall FUN_005619F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xC]
        push    esi
        mov     esi, ecx
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_00561af0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xC
    }
}
