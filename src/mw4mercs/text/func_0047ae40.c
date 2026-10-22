/*
 * FUN_0047ae40 (166 B) — MLR PMesh visibility/backface test (__thiscall, RET 0x8).
 * Computes per-vertex dot products against a light/camera vector and
 * accumulates a visibility count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047aef0(void);
extern int g_007da5e8;
extern float g_0076c5b0;

__declspec(naked) void FUN_0047ae40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax+0x8]
        mov     ecx, dword ptr [esi+0x64]
        xor     edi, edi
        test    ecx, ecx
        jg      L_47ae5d
        pop     edi
        mov     byte ptr [esi+0x10], 0x0
        xor     eax, eax
        pop     esi
        ret     0x8
L_47ae5d:
        mov     edx, dword ptr [g_007da5e8]
        mov     ecx, dword ptr [esi+0x58]
        mov     edx, dword ptr [edx]
        push    ebx
        test    byte ptr [esi+0x28], 0x10
        jnz     L_47ae7d
        mov     ecx, esi
        call    FUN_0047aef0
        mov     edi, 0x1
        jmp     L_47aecc
L_47ae7d:
        test    eax, eax
        jle     L_47aec4
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        mov     ebx, eax
L_47ae88:
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [ebp+0x8]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [ebp+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [ebp]
        faddp   st(1), st(0)
        fsub    dword ptr [ecx+0xc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_47aeb1
        or      al, 0xff
        jmp     L_47aeb3
L_47aeb1:
        xor     al, al
L_47aeb3:
        mov     byte ptr [edx], al
        and     eax, 0xff
        add     edi, eax
        add     ecx, 0x10
        inc     edx
        dec     ebx
        jnz     L_47ae88
        pop     ebp
L_47aec4:
        test    edi, edi
        setnz   al
        mov     byte ptr [esi+0x10], al
L_47aecc:
        mov     edx, dword ptr [esi]
        test    edi, edi
        setnz   cl
        mov     byte ptr [esi+0x10], cl
        mov     ecx, esi
        call    dword ptr [edx+0x98]
        pop     ebx
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x8
    }
}
