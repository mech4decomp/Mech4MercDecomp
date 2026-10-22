/*
 * FUN_004EA970 (115 B) - MLR/Adept tile list update (__thiscall, RET 8, double arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* DAT_0076c5b0 */
extern int   g_7dab44;   /* DAT_007dab44 */
extern int   g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __fastcall FUN_004ea970(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x154]
    L978:
        test    edi, edi
        jz      L9DE
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L9DE
        fld     qword ptr [esp + 0xc]
        fsub    qword ptr [esi + 0xe4]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L978
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x1c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x1dc]
        mov     edx, dword ptr [edx + eax*4]
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x134], edx
        mov     edx, dword ptr [ecx + 0x1dc]
        mov     dword ptr [edx + eax*4], esi
        jmp     L978
    L9DE:
        pop     edi
        pop     esi
        ret     8
    }
}
