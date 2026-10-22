/*
 * FUN_00709120 (623 B) — gosScript "RestartGameOS": validates state,
 * re-initializes the GameOS heap/streams, rebuilds a bitmask table, and
 * switches the stack to a saved context before running the restart chain.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00859278;
extern int g_00859b94;
extern char g_0087dd0b;
extern int g_0085b4a0;
extern int g_00849310;
extern int g_00849330;
extern int g_00858f54;
extern char g_00859af5;
extern char g_0087bc35;
extern void *g_00858a40;
extern int g_008aa1f8;
extern char g_008a99b0;
extern int g_00858f50;
extern int g_00858af8;
extern int g_00859b98;
extern int g_0085b4a4;
extern int g_00858944;
extern int g_00858940;
extern int g_0085894c;
extern int g_00858f60;
extern int g_007b6fac;
extern int g_00858f64;
extern char g_00858954;
extern int g_00858f5c;
extern char g_00858f58;
extern int g_0085a0d4;
extern char g_00858955;
extern char g_0085a0c5;
extern int g_00859ae0;
extern int g_0085a0d0;
extern char g_0085a0c4;
extern char g_00858990;
extern int g_00859af8;
extern int g_00858ac0;
extern int g_00858c08;
extern int g_00858e28;
extern int g_00858998;
extern void *g_00858a34;
extern char g_007a15c0;

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0070e160(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00717590(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00729a30(void);
extern void __cdecl FUN_00747730(void);
extern void __cdecl FUN_00739fc0(void);
extern void __cdecl FUN_007335f0(void);
extern void __cdecl FUN_0072d400(void);
extern void __cdecl FUN_00733300(void);
extern void __cdecl FUN_0070f960(void);
extern void __cdecl FUN_0070e150(void);
extern void __cdecl FUN_00737020(void);
extern void __cdecl FUN_00733250(void);
extern void __cdecl FUN_007175d0(void);
extern void __cdecl FUN_0072d2e0(void);
extern void __cdecl FUN_00747670(void);
extern void __cdecl FUN_00717d80(void);
extern void __cdecl FUN_007222b0(void);
extern void __cdecl FUN_007299c0(void);
extern void __cdecl FUN_00739c40(void);
extern void __cdecl FUN_00733390(void);
extern void __cdecl FUN_00707990(void);
extern void __cdecl FUN_00748300(void);
extern void __cdecl FUN_00709c20(void);
extern void __cdecl FUN_0070c960(void);

__declspec(naked) void FUN_00709120(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_00859278]
        test    eax, eax
        jz      L_913e
        push    offset g_007a15c0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_913e
        int     3
    L_913e:
        mov     eax, dword ptr [g_00859b94]
        test    eax, eax
        jz      L_938d
        mov     byte ptr [g_0087dd0b], 0
        mov     eax, dword ptr [g_0085b4a0]
        test    eax, eax
        jnz     L_9160
        call    FUN_0070e160
    L_9160:
        mov     ecx, dword ptr [g_00849310]
        mov     eax, dword ptr [g_00849330]
        push    ebx
        push    esi
        push    edi
        push    ecx
        mov     dword ptr [g_00858f54], eax
        call    FUN_006f4950
        call    FUN_00717590
        mov     ebx, 1
        mov     byte ptr [g_00859af5], bl
        mov     dword ptr [g_0085b4a0], ebx
        mov     byte ptr [g_0087bc35], bl
        call    dword ptr [g_00858a40]
        mov     byte ptr [g_0087bc35], 0
        call    FUN_006f49a0
        call    FUN_00729a30
        call    FUN_00747730
        call    FUN_00739fc0
        call    FUN_007335f0
        call    FUN_0072d400
        mov     esi, dword ptr [g_008aa1f8]
        xor     eax, eax
        mov     ecx, 8
        mov     edi, offset g_008a99b0
        rep     stosd
        xor     edi, edi
        test    esi, esi
        mov     dword ptr [g_00858f50], edi
        jz      L_9211
    L_91e0:
        mov     eax, dword ptr [esi+4]
        test    eax, 0x40000000
        jnz     L_9205
        test    al, 2
        jz      L_9204
        mov     edx, edi
        shr     edx, 3
        lea     eax, [edx + g_008a99b0]
        mov     ecx, edi
        and     ecx, 7
        mov     dl, bl
        shl     dl, cl
        or      byte ptr [eax], dl
    L_9204:
        inc     edi
    L_9205:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_91e0
        mov     dword ptr [g_00858f50], edi
    L_9211:
        call    FUN_00733300
        call    FUN_0070f960
        inc     dword ptr [g_00858af8]
        mov     esp, dword ptr [g_00859b94]
        mov     ebp, dword ptr [g_00859b98]
        inc     dword ptr [g_0085b4a4]
        mov     dword ptr [g_0085b4a0], ebx
        call    FUN_0070e150
        mov     ecx, dword ptr [g_00858944]
        mov     eax, dword ptr [g_00858940]
        mov     edx, dword ptr [g_0085894c]
        mov     dword ptr [g_00858f60], ecx
        mov     ecx, dword ptr [g_007b6fac]
        mov     dword ptr [g_00858f64], eax
        mov     al, byte ptr [g_00858954]
        push    ecx
        mov     dword ptr [g_00858f5c], edx
        mov     byte ptr [g_00858f58], al
        call    FUN_00737020
        mov     eax, dword ptr [g_00858f64]
        mov     edx, dword ptr [g_00858f5c]
        mov     ecx, dword ptr [g_00858f60]
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     al, byte ptr [g_00858955]
        mov     byte ptr [g_0085a0c5], al
        mov     eax, dword ptr [g_00859ae0]
        mov     dword ptr [g_0085894c], edx
        mov     dl, byte ptr [g_00858f58]
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [g_00858944], ecx
        mov     byte ptr [g_00858954], dl
        mov     dword ptr [g_0085a0d0], ecx
        mov     byte ptr [g_0085a0c4], dl
        jz      L_92d0
        mov     byte ptr [g_00858990], bl
    L_92d0:
        mov     dword ptr [g_00859af8], esi
        mov     dword ptr [g_00858ac0], esi
        mov     dword ptr [g_00858c08], ebx
        mov     byte ptr [g_0087bc35], 0
        mov     dword ptr [g_00858e28], esi
        call    FUN_00733250
        call    FUN_007175d0
        call    FUN_0072d2e0
        call    FUN_00747670
        call    FUN_00717d80
        call    FUN_007222b0
        call    FUN_007299c0
        mov     ecx, dword ptr [g_00858998]
        push    ecx
        call    FUN_00739c40
        call    FUN_00733390
        call    FUN_00707990
        mov     edx, dword ptr [g_00858af8]
        mov     eax, dword ptr [g_00849310]
        inc     edx
        mov     dword ptr [g_00858af8], edx
        mov     edx, dword ptr [g_00849330]
        push    eax
        mov     dword ptr [g_00858f54], edx
        mov     dword ptr [g_00858c08], 2
        call    FUN_006f4950
        call    dword ptr [g_00858a34]
        call    FUN_006f49a0
        mov     dword ptr [g_00858c08], 3
        call    FUN_00748300
        cmp     dword ptr [g_00858ac0], esi
        jnz     L_9385
    L_9378:
        call    FUN_00709c20
        cmp     dword ptr [g_00858ac0], esi
        jz      L_9378
    L_9385:
        call    FUN_0070c960
        pop     edi
        pop     esi
        pop     ebx
    L_938d:
        pop     ebp
        ret
    }
}
