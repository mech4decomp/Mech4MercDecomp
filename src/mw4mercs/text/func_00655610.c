/*
 * FUN_00655610 (90 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Rebuilds this+0x48: frees the old object, allocates a new one via
 * FUN_004084d0(0xc) + FUN_0068cc30, then calls FUN_0068d110(param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2464;
extern void __stdcall FUN_0068ce20(void);
extern void __cdecl FUN_004084e0(void *param);
extern void __stdcall FUN_006f4950(int param);
extern void __cdecl FUN_004084d0(int size);
extern void __stdcall FUN_0068cc30(void);
extern void __stdcall FUN_006f49a0(void);
extern void __stdcall FUN_0068d110(int param);

__declspec(naked) void __stdcall FUN_00655610(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x48]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_0068ce20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [g_007f2464]
        push    eax
        call    FUN_006f4950
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L2
        mov     ecx, eax
        call    FUN_0068cc30
        mov     esi, eax
        jmp     L3
L2:
        xor     esi, esi
L3:
        mov     dword ptr [edi + 0x48], esi
        call    FUN_006f49a0
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_0068d110
        pop     edi
        pop     esi
        ret     0x4
    }
}
