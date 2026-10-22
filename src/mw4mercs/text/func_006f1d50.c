/*
 * FUN_006f1d50 (668 B) — __fastcall state machine (ECX = this, RET 0).
 *
 * Dispatches on *this (3/4/5) and drives a set of sub-objects via
 * FUN_0041fd80/FUN_0041fcb0/FUN_0041fcd0 and FUN_006f3960/39a0/39c0,
 * comparing FPU results against g_76d970.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0041fd80(void);
extern void  __cdecl FUN_0041fcb0(void);
extern void  __cdecl FUN_0041fcd0(void *p);
extern void  __cdecl FUN_006f3960(int a, int b);
extern float __cdecl FUN_006f39a0(void);
extern void  __cdecl FUN_006f39c0(void);

extern double g_76d970;

__declspec(naked) char __fastcall FUN_006f1d50(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        sub     eax, 0x3
        push    edi
        jz      L_1f63
        dec     eax
        jz      L_1ec9
        dec     eax
        jz      L_1d72
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
L_1d72:
        lea     ebx, [esi + 0x28]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1df2
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_0041fd80
        cmp     eax, ebp
        jz      L_1dc5
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     byte ptr [esi + 0x68], 0x0
        jmp     L_1f91
L_1dc5:
        push    0x40340000
        push    0x0
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3960
        lea     ecx, [esi + 0x80]
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1fe5
        jmp     L_1e67
L_1df2:
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e4f
        lea     ecx, [esi + 0x8]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        mov     ecx, edi
        mov     byte ptr [esi + 0x68], 0x0
        call    FUN_006f39c0
        lea     ecx, [esi + 0x80]
        call    FUN_006f39c0
        lea     ecx, [esi + 0x94]
        call    FUN_006f39c0
        pop     edi
        mov     dword ptr [esi], 0x2
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1e4f:
        lea     ecx, [esi + 0x80]
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e8e
L_1e67:
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        push    0x40000000
        push    0x0
        lea     ecx, [esi + 0x94]
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi], 0x4
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1e8e:
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1eaa
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jz      L_1fe5
L_1eaa:
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x94]
        call    FUN_006f39c0
        pop     edi
        mov     dword ptr [esi], 0x4
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1ec9:
        lea     ebx, [esi + 0x28]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1f21
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_0041fd80
        cmp     eax, ebp
        jz      L_1f0b
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, ebx
        call    FUN_0041fcb0
L_1f0b:
        push    0x40340000
        push    0x0
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3960
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1f21:
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1fe5
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        push    0x40340000
        push    0x0
        mov     ecx, edi
        mov     byte ptr [esi + 0x68], 0x0
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi], 0x3
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1f63:
        lea     ebx, [esi + 0x28]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1fad
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, ebx
        call    FUN_0041fcb0
L_1f91:
        push    0x40340000
        push    0x0
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi], 0x4
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_1fad:
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1fe5
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        mov     ecx, edi
        mov     byte ptr [esi + 0x68], 0x0
        call    FUN_006f39c0
        mov     dword ptr [esi], 0x3
L_1fe5:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
    }
}
