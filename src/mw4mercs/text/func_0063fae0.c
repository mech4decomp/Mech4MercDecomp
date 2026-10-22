/*
 * FUN_0063fae0 (126 B) — Copy state blocks from a shared source.
 *
 * __thiscall (ECX = this), RET 4 (one float stack param).
 * Stores param at this+0x74, then conditionally copies 0x30C/0x944
 * blocks into this+0xA8/0x78 based on FUN_00415230 and a float
 * comparison against g_76c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);

extern int g_7f25c0;
extern float g_76c5b0;

__declspec(naked) void __stdcall FUN_0063fae0(float param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        lea     ebx, [ebp + 0x54]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x74], eax
        call    FUN_0041fd80
        test    eax, eax
        jz      l_57
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_7f25c0]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      l_2f
        mov     ecx, ebx
        call    FUN_0041fd80
        lea     edi, [ebp + 0xa8]
        lea     esi, [eax + 0x30c]
        mov     ecx, 0xc
        rep     movsd
    l_2f:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_57
        mov     ecx, ebx
        call    FUN_0041fd80
        lea     edi, [ebp + 0x78]
        lea     esi, [eax + 0x944]
        mov     ecx, 0xc
        rep     movsd
    l_57:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
