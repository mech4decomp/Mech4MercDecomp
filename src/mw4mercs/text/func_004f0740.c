/*
 * FUN_004f0740 (53 B) - __thiscall (RET 0xc). Adept/MLR constructor:
 * calls FUN_004f07a0 on this+0x28, then FUN_004f0ce0, sets vtable
 * 0x774d6c and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f07a0(void);
extern void __cdecl FUN_004f0ce0(void);
extern void *g_774d6c; /* 0x00774d6c vtable */

__declspec(naked) void *func_004f0740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        lea     eax, [esi + 0x28]
        push    eax
        push    edi
        call    FUN_004f07a0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x8
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_004f0ce0
        pop     edi
        mov     dword ptr [esi], offset g_774d6c
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
