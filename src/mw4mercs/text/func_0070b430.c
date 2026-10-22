/*
 * FUN_0070B430 (567 B) — Global resource shutdown/cleanup.
 *
 * Releases a set of global objects (DAT_0085a2xx family), walks a linked
 * list at DAT_008b79e4, and tears down the window/display state.
 *
 * __cdecl, no params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85a228;
extern int g_85a210;
extern int g_85a250;
extern int g_8b79e4;
extern char g_87c5b0;
extern int g_85a248;
extern int g_85a244;
extern int g_85a234;
extern int g_85a214;
extern int g_85a220;
extern int g_85a224;
extern char g_858954;
extern int g_85a230;
extern char g_87dd0a;
extern int g_858bf8;
extern int g_85a098;
extern int g_85a0a0;
extern int g_85a22c;

extern void *g_76b498;   /* IAT: ClipCursor */
extern void *g_76b48c;   /* IAT: SetWindowLongA */
extern void *g_76b4a4;   /* IAT: SetWindowPos */
extern void *g_76b480;   /* IAT: SetWindowPlacement */

extern void __stdcall FUN_007358a0(int a, int b);
extern void __stdcall FUN_00740db0(int a);
extern void __stdcall FUN_0074a620(int a, int b, int c);
extern void __stdcall FUN_007479d0(int a, int b);
extern void __stdcall FUN_006f4230(int a);
extern void __stdcall FUN_0074a9b0(void);
extern void __stdcall FUN_00723e50(void);
extern void __stdcall FUN_0074a2c0(int a);
extern void __stdcall FUN_0074b0f0(void);
extern void __stdcall FUN_00735850(int a, int b, int c);
extern void __stdcall FUN_007351b0(int a);
extern void __stdcall FUN_00735280(int a, int b, int c);

__declspec(naked) void __stdcall FUN_0070b430(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    ebx
        call    dword ptr [g_76b498]        ; ClipCursor(NULL)
        cmp     dword ptr [g_85a228], ebx
        jz      L_70b463
        mov     eax, dword ptr [g_85a210]
        cmp     eax, ebx
        jz      L_70b452
        push    ebx
        push    eax
        call    FUN_007358a0
L_70b452:
        mov     eax, dword ptr [g_85a228]
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a228], ebx
L_70b463:
        mov     eax, dword ptr [g_85a250]
        cmp     eax, ebx
        jz      L_70b492
        push    ebx
        push    ebx
        push    eax
        call    FUN_0074a620
        mov     ecx, dword ptr [g_85a250]
        push    ebx
        push    1
        push    ecx
        call    FUN_0074a620
        mov     edx, dword ptr [g_85a250]
        push    ebx
        push    2
        push    edx
        call    FUN_0074a620
L_70b492:
        push    esi
        push    ebx
        call    FUN_007479d0
        mov     esi, dword ptr [g_8b79e4]
        cmp     esi, ebx
        jz      L_70b4bf
        push    edi
L_70b4a4:
        mov     edi, esi
        mov     eax, dword ptr [edi + 0x80]
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_00740db0
        push    edi
        call    FUN_006f4230
        cmp     esi, ebx
        jnz     L_70b4a4
        pop     edi
L_70b4bf:
        mov     dword ptr [g_8b79e4], ebx
        call    FUN_0074a9b0
        call    FUN_00723e50
        cmp     byte ptr [g_87c5b0], bl
        pop     esi
        jz      L_70b4ed
        mov     eax, dword ptr [g_85a248]
        cmp     eax, ebx
        jz      L_70b4ed
        push    eax
        call    FUN_0074a2c0
        mov     byte ptr [g_87c5b0], bl
L_70b4ed:
        mov     eax, dword ptr [g_85a250]
        cmp     eax, ebx
        jz      L_70b502
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a250], ebx
L_70b502:
        mov     eax, dword ptr [g_85a244]
        cmp     eax, ebx
        jz      L_70b517
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a244], ebx
L_70b517:
        call    FUN_0074b0f0
        mov     eax, dword ptr [g_85a234]
        cmp     eax, ebx
        jz      L_70b552
        mov     ecx, dword ptr [g_85a214]
        push    eax
        push    ebx
        push    ecx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735850
        mov     edx, dword ptr [g_85a234]
        push    edx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00740db0
        mov     dword ptr [g_85a234], ebx
L_70b552:
        mov     eax, dword ptr [g_85a220]
        cmp     eax, ebx
        jz      L_70b567
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a220], ebx
L_70b567:
        mov     eax, dword ptr [g_85a224]
        cmp     eax, ebx
        jz      L_70b57c
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a224], ebx
L_70b57c:
        mov     eax, dword ptr [g_85a214]
        cmp     eax, ebx
        jz      L_70b591
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a214], ebx
L_70b591:
        mov     eax, dword ptr [g_85a210]
        cmp     eax, ebx
        jz      L_70b5a6
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a210], ebx
L_70b5a6:
        cmp     byte ptr [g_858954], bl
        jz      L_70b64b
        mov     eax, dword ptr [g_85a230]
        cmp     eax, ebx
        jz      L_70b659
        push    eax
        mov     byte ptr [g_87dd0a], 1
        call    FUN_007351b0
        mov     eax, dword ptr [g_858bf8]
        mov     ecx, dword ptr [g_85a230]
        push    8
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00735280
        mov     edx, dword ptr [g_858bf8]
        push    0x10cb0000
        push    -0x10
        push    edx
        call    dword ptr [g_76b48c]        ; SetWindowLongA
        mov     eax, dword ptr [g_858bf8]
        push    0x67
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    eax
        call    dword ptr [g_76b4a4]        ; SetWindowPos
        mov     ecx, dword ptr [g_858bf8]
        push    offset g_85a098
        push    ecx
        mov     dword ptr [g_85a098], 0x2c
        mov     dword ptr [g_85a0a0], 4
        call    dword ptr [g_76b480]        ; SetWindowPlacement
        mov     edx, dword ptr [g_85a230]
        push    edx
        call    FUN_00740db0
        mov     eax, dword ptr [g_85a22c]
        mov     dword ptr [g_85a230], eax
        pop     ebx
        ret
L_70b64b:
        mov     ecx, dword ptr [g_85a22c]
        mov     dword ptr [g_85a230], ecx
        pop     ebx
        ret
L_70b659:
        mov     edx, dword ptr [g_85a22c]
        mov     dword ptr [g_85a230], edx
        pop     ebx
        ret
    }
}
