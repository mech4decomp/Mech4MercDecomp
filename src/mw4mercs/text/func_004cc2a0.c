/*
 * FUN_004cc2a0 (71 B) — __thiscall destructor. Sets vtable pointer
 * (0x7719dc), releases a member object (virtual calls + FUN_004084e0),
 * then calls base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004cc2a0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0x10]
        test    esi, esi
        mov     dword ptr [edi], 0x7719dc
        jz      L2dd
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax+0xc]
        mov     dword ptr [esi+0x8], 0xffffffec
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        test    esi, esi
        jz      L2dd
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
    L2dd:
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
