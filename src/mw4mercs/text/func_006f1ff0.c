/*
 * FUN_006f1ff0 (762 B) — __fastcall state-machine update routine.
 *
 * Dispatches on the object's state field (ESI[0]) and performs a series of
 * sub-object initializations / comparisons, using FPU comparisons against
 * DAT_0076d970.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f1b80(void);
extern void *__cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_006f3960(void);
extern void __cdecl FUN_006f39a0(void);
extern void __cdecl FUN_006f39c0(void);
extern int __cdecl FUN_006f1bc0(void);
extern char __cdecl FUN_006f1c90(void);
extern char __cdecl FUN_006f1ce0(void);
extern char __cdecl FUN_006f1d50(void);
extern double g_76d970;

__declspec(naked) void __fastcall FUN_006f1ff0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006f1b80
        lea     edi, [esi + 8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_20bd
        cmp     dword ptr [esi], 1
        jnz     L_20bd
        mov     al, byte ptr [esi + 0x6a]
        test    al, al
        jz      L_20bd
        lea     ebx, [esi + 0x38]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        mov     ecx, edi
        jz      L_204d
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        jmp     L_2052
    L_204d:
        call    FUN_0041fcb0
    L_2052:
        mov     ecx, ebx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x30]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x28]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        mov     ecx, edi
        mov     byte ptr [esi + 0x68], 0
        mov     byte ptr [esi + 0x69], 0
        mov     byte ptr [esi + 0x6a], 0
        call    FUN_0041fd80
        test    eax, eax
        jz      L_20ae
        push    0x40340000
        push    0
        lea     ecx, [esi + 0x6c]
        mov     dword ptr [esi], 3
        call    FUN_006f3960
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_20ae:
        mov     dword ptr [esi], 2
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_20bd:
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_20f1
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ebx, eax
        mov     eax, dword ptr [ebx + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      L_20f1
        lea     ecx, [esi + 0x60]
        call    FUN_0041fd80
        cmp     ebx, eax
        jnz     L_20f1
        mov     ecx, edi
        call    FUN_0041fcb0
    L_20f1:
        mov     eax, dword ptr [esi]
        cmp     eax, 2
        jnz     L_210a
        mov     ecx, esi
        call    FUN_006f1bc0
        mov     dword ptr [esi], eax
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_210a:
        cmp     eax, 3
        jnz     L_2136
    L_210f:
        mov     ecx, esi
        call    FUN_006f1c90
        test    al, al
        jnz     L_22d8
        mov     ecx, esi
        call    FUN_006f1ce0
        test    al, al
        jz      L_22cd
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_2136:
        cmp     eax, 4
        jnz     L_21af
        lea     ebx, [esi + 0x30]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_210f
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     edi, eax
        call    FUN_0041fd80
        cmp     eax, edi
        jz      L_210f
        lea     ecx, [esi + 0x94]
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 1
        jz      L_210f
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        push    0x40340000
        push    0
        lea     ecx, [esi + 0x80]
        call    FUN_006f3960
        mov     dword ptr [esi], 5
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_21af:
        cmp     eax, 5
        jnz     L_22e1
        lea     ebx, [esi + 0x30]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_22a5
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     edi, eax
        call    FUN_0041fd80
        cmp     eax, edi
        jz      L_22a5
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, ebx
        mov     dword ptr [esp + 0xc], eax
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0xc]
        jnz     L_224a
        lea     ebx, [esi + 0x80]
        mov     ecx, ebx
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 1
        jz      L_22a5
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_006f39c0
        push    0x40000000
        push    0
        lea     ecx, [esi + 0x94]
        call    FUN_006f3960
        mov     dword ptr [esi], 4
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_224a:
        lea     ecx, [esi + 0x94]
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 1
        jz      L_22d8
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        push    0x40000000
        push    0
        lea     ecx, [esi + 0x94]
        call    FUN_006f3960
        push    0x40100000
        push    0
        lea     ecx, [esi + 0x80]
        call    FUN_006f3960
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_22a5:
        mov     ecx, esi
        call    FUN_006f1c90
        test    al, al
        jz      L_22b9
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_22b9:
        mov     ecx, esi
        call    FUN_006f1ce0
        test    al, al
        jz      L_22cd
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_22cd:
        mov     ecx, esi
        call    FUN_006f1d50
        test    al, al
        jz      L_22e1
    L_22d8:
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_22e1:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
