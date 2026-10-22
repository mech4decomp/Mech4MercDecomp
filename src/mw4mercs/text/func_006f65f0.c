/*
 * FUN_006f65f0 (348 B) — __thiscall. Guards against re-entry via
 * g_8493d6; if already active returns 0. Otherwise calls a virtual
 * method on the object at g_7b6ed0, and if it returns 0, iterates over
 * game indices (FUN_006f8430 / FUN_006f7970), resolving "IpAddr"/"Flags"
 * attributes (FUN_006f89f0 / FUN_006f5b80), and registers each game via
 * the object's virtual methods (offsets 0x8 / 0x1c) or a fallback path.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8493d6;  /* 0x008493d6 */
extern unsigned int g_7b6ed0;   /* 0x007b6ed0 */
extern void *g_76b318;          /* 0x0076b318 atoi IAT */
extern void *g_8aac90;          /* 0x008aac90 fn ptr */
extern void *g_8aac94;          /* 0x008aac94 fn ptr */
extern void FUN_006f5ed0(void);
extern void FUN_006f5ee0(void);
extern int FUN_006f89f0(void);
extern int FUN_006f8430(void);
extern int FUN_006f7970(void);
extern int FUN_006fabf0(void);
extern int FUN_006f5b80(void);

__declspec(naked) int __fastcall FUN_006f65f0(void *param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        cmp     byte ptr [g_8493d6], 0x1
        jnz     L_6605
        xor     al, al
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_6605:
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_7b6ed0]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx]
        test    eax, eax
        jz      L_661f
        xor     al, al
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_661f:
        push    ebx
        push    esi
        call    FUN_006f5ed0
        mov     byte ptr [g_8493d6], 0x1
        call    FUN_006f89f0
        test    eax, eax
        jz      L_6742
        call    FUN_006f89f0
        mov     esi, dword ptr [eax + 0x3c]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], esi
        xor     ebx, ebx
        call    FUN_006f8430
        test    eax, eax
        jle     L_6742
        push    edi
L_6657:
        lea     eax, [ebp + 0x8]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], 0x0
        call    FUN_006f7970
        test    al, al
        jnz     L_668a
        push    ebx
        push    0x79fc8c
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_672e
        int     3
        jmp     L_672e   /* dead code present in reference after INT3 */
L_668a:
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x79fa18
        push    ecx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        mov     edi, eax
        test    edi, edi
        jz      L_672e
        mov     edx, dword ptr [ebp + 0x8]
        push    0x79fae0
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        xor     esi, esi
        test    eax, eax
        jz      L_66d0
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 0x4
        mov     esi, eax
L_66d0:
        push    edi
        call    dword ptr [g_8aac90]
        test    esi, 0x1000
        jnz     L_6714
        cmp     eax, -0x1
        jz      L_6714
        push    eax
        call    dword ptr [g_8aac94]
        mov     esi, eax
        mov     eax, dword ptr [g_7b6ed0]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x8]
        test    eax, eax
        jnz     L_672e
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_7b6ed0]
        mov     edx, dword ptr [eax]
        push    ecx
        push    0x6f9110
        push    esi
        push    eax
        call    dword ptr [edx + 0x1c]
        jmp     L_672e
L_6714:
        call    FUN_006f89f0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [eax]
        push    0x79fbdc
        push    0x79fac0
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x8]
L_672e:
        mov     esi, dword ptr [ebp - 0x4]
        mov     ecx, esi
        inc     ebx
        call    FUN_006f8430
        cmp     ebx, eax
        jl      L_6657
        pop     edi
L_6742:
        call    FUN_006f5ee0
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
