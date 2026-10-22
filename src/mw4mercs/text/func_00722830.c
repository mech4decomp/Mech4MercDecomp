/*
 * FUN_00722830 (1401 B) — Joystick device setup/registration.
 *
 * Reads joystick type byte at param+0x24; if 2 or 3, returns 1 immediately.
 * Otherwise acquires the joystick, sets data format, enumerates buttons/axes
 * and stores capability flags into the global joystick table (0x857f48+).
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_858138;      /* DAT_00858138 - current joystick index */
extern unsigned long g_857f40;      /* DAT_00857f40 */
extern unsigned char g_87dd0a;      /* DAT_0087dd0a */
extern unsigned long g_858bf8;      /* DAT_00858bf8 */
extern void *g_76b474;              /* IAT GetParent */
extern void *g_76b320;              /* IAT strncpy */
extern unsigned char g_858684;      /* DAT_00858684 */
extern unsigned long g_857f48;      /* DAT_00857f48 - joystick table */
extern unsigned long g_8597a8;      /* DAT_008597a8 */
extern unsigned char g_85814b;      /* DAT_0085814b */
extern unsigned char g_857f88;      /* DAT_00857f88 */
extern unsigned char g_858128;      /* DAT_00858128 */
extern unsigned char g_857fa3;      /* DAT_00857fa3 */
extern unsigned char g_857fa2;      /* DAT_00857fa2 */
extern unsigned char g_857fa1;      /* DAT_00857fa1 */
extern unsigned char g_857fa0;      /* DAT_00857fa0 */
extern unsigned char g_857f9f;      /* DAT_00857f9f */
extern unsigned char g_857f9e;      /* DAT_00857f9e */
extern unsigned char g_857f9d;      /* DAT_00857f9d */
extern unsigned char g_857f9c;      /* DAT_00857f9c */
extern unsigned char g_857f9b;      /* DAT_00857f9b */
extern unsigned char g_857f9a;      /* DAT_00857f9a */
extern unsigned char g_857f99;      /* DAT_00857f99 */
extern unsigned char g_857f98;      /* DAT_00857f98 */
extern unsigned char g_85815b;      /* DAT_0085815b */
extern unsigned char g_85813b;      /* DAT_0085813b */

extern int __cdecl FUN_00755330(void *a, void *b, void *c, void *d, int e);
extern int __cdecl FUN_007553d0(void *a, void *b, int c);
extern int __cdecl FUN_00755380(void *a, void *b);
extern int __cdecl FUN_006fab90(void *a);
extern void __cdecl FUN_00740db0(void *a);
extern int __cdecl FUN_007555a0(void *a, void *b);
extern int __cdecl FUN_00740d60(void *a, void *b, void *c);
extern int __cdecl FUN_007555e0(void *a, void *b);
extern int __cdecl FUN_00755550(void *a, int b, void *c);
extern int __cdecl FUN_00755460(void *a);
extern void __cdecl FUN_00722db0(int a);
extern void __cdecl FUN_007230c0(int a);

__declspec(naked) void __stdcall FUN_00722830(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x288
        mov     eax, dword ptr [ebp + 0x8]
        mov     cl, byte ptr [eax + 0x24]
        cmp     cl, 0x2
        push    ebx
        push    esi
        push    edi
        jz      L_22d9b
        cmp     cl, 0x3
        jz      L_22d9b
        cmp     byte ptr [g_858138], 0x10
        jnz     L_22868
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_22868:
        mov     edx, dword ptr [g_857f40]
        xor     ebx, ebx
        push    ebx
        lea     ecx, [ebp + 0x8]
        push    ecx
        push    0x7a28d0
        add     eax, 0x4
        push    eax
        push    edx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00755330
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     L_22d9b
        mov     esi, dword ptr [g_858bf8]
        mov     edi, dword ptr [g_76b474]
        push    esi
        call    edi
        test    eax, eax
        jz      L_228b8
L_228ac:
        push    esi
        call    edi
        mov     esi, eax
        push    esi
        call    edi
        test    eax, eax
        jnz     L_228ac
L_228b8:
        mov     eax, dword ptr [ebp + 0x8]
        push    0x5
        push    esi
        push    eax
        call    FUN_007553d0
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x7afca0
        push    ecx
        call    FUN_00755380
        test    eax, eax
        jz      L_228ff
        push    0x7a53e8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_228e8
        int     3
L_228e8:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        call    FUN_00740db0
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_228ff:
        xor     eax, eax
        mov     ecx, 0x91
        lea     edi, [ebp - 0x288]
        rep     stosd
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [ebp - 0x288]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x288], 0x244
        call    FUN_007555a0
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        push    0x20
        lea     edx, [ebp - 0x15c]
        shl     eax, 0x5
        push    edx
        add     eax, 0x858684
        push    eax
        call    dword ptr [g_76b320]
        mov     ecx, dword ptr [g_858138]
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0xc
        and     ecx, 0xff
        lea     edx, [ecx*4 + g_857f48]
        push    edx
        push    0x7a28d0
        push    eax
        call    FUN_00740d60
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        call    FUN_00740db0
        xor     eax, eax
        mov     ecx, 0xb
        lea     edi, [ebp - 0x44]
        rep     stosd
        mov     eax, dword ptr [g_858138]
        lea     edx, [ebp - 0x44]
        and     eax, 0xff
        mov     ecx, dword ptr [eax*4 + g_857f48]
        push    edx
        push    ecx
        mov     dword ptr [ebp - 0x44], 0x2c
        call    FUN_007555e0
        cmp     dword ptr [ebp - 0x38], ebx
        jz      L_22d82
        cmp     dword ptr [ebp - 0x34], ebx
        jz      L_22d82
        mov     edx, dword ptr [g_858138]
        and     edx, 0xff
        mov     byte ptr [edx + g_85814b], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        mov     byte ptr [eax + g_857f88], bl
        cmp     dword ptr [g_8597a8], ebx
        jnz     L_229ee
        mov     eax, dword ptr [ebp - 0x40]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_229ee
        mov     al, 0x1
        jmp     L_229f0
L_229ee:
        xor     al, al
L_229f0:
        mov     ecx, dword ptr [g_858138]
        and     ecx, 0xff
        mov     byte ptr [ecx + g_858128], al
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [eax + eax*2]
        mov     byte ptr [edx*4 + g_857fa3], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     eax, [eax + eax*2]
        mov     byte ptr [eax*4 + g_857fa2], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857fa1], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [eax + eax*2]
        mov     byte ptr [edx*4 + g_857fa0], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     eax, [eax + eax*2]
        mov     byte ptr [eax*4 + g_857f9f], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9e], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [eax + eax*2]
        mov     byte ptr [edx*4 + g_857f9d], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     eax, [eax + eax*2]
        mov     byte ptr [eax*4 + g_857f9c], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9b], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [eax + eax*2]
        mov     byte ptr [edx*4 + g_857f9a], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     eax, [eax + eax*2]
        mov     byte ptr [eax*4 + g_857f99], bl
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [ebp - 0x18]
        push    edx
        lea     ecx, [eax + eax*2]
        mov     eax, dword ptr [ebp + 0x8]
        push    0x4
        mov     edi, 0x18
        mov     esi, 0x10
        push    eax
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp - 0x10], ebx
        mov     dword ptr [ebp - 0xc], 0x1
        mov     dword ptr [ebp - 0x8], 0xfffffc18
        mov     dword ptr [ebp - 0x4], 0x3e8
        mov     byte ptr [ecx*4 + g_857f98], bl
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00755550
        test    eax, eax
        jnz     L_22b49
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f98], 0x1
L_22b49:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], 0x4
        call    FUN_00755550
        test    eax, eax
        jnz     L_22b78
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f99], 0x1
L_22b78:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], 0x8
        call    FUN_00755550
        test    eax, eax
        jnz     L_22ba7
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9a], 0x1
L_22ba7:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], 0xc
        call    FUN_00755550
        test    eax, eax
        jnz     L_22bd6
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9b], 0x1
L_22bd6:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], esi
        call    FUN_00755550
        test    eax, eax
        jnz     L_22c01
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9c], 0x1
L_22c01:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], 0x14
        call    FUN_00755550
        test    eax, eax
        jnz     L_22c30
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9d], 0x1
L_22c30:
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x4
        push    eax
        mov     dword ptr [ebp - 0x10], edi
        call    FUN_00755550
        test    eax, eax
        jnz     L_22c77
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     ecx, [eax + eax*2]
        mov     byte ptr [ecx*4 + g_857f9e], 0x1
        mov     edx, dword ptr [g_858138]
        and     edx, 0xff
        mov     cl, byte ptr [edx + g_85814b]
        lea     eax, [edx + g_85814b]
        inc     cl
        mov     byte ptr [eax], cl
L_22c77:
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [ebp - 0x18]
        push    eax
        push    0x4
        push    ecx
        mov     dword ptr [ebp - 0x10], 0x1c
        call    FUN_00755550
        test    eax, eax
        jnz     L_22cc0
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        lea     edx, [eax + eax*2]
        mov     byte ptr [edx*4 + g_857f9f], 0x1
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        mov     cl, byte ptr [eax + g_85814b]
        lea     eax, [eax + g_85814b]
        inc     cl
        mov     byte ptr [eax], cl
L_22cc0:
        mov     ecx, dword ptr [g_858138]
        mov     dl, byte ptr [ebp - 0x34]
        and     ecx, 0xff
        mov     byte ptr [ecx + g_85815b], dl
        mov     eax, dword ptr [g_858138]
        mov     cl, byte ptr [ebp - 0x30]
        and     eax, 0xff
        mov     byte ptr [eax + g_85813b], cl
        mov     edi, dword ptr [g_858138]
        mov     eax, edi
        and     eax, 0xff
        mov     cl, byte ptr [eax + g_85813b]
        xor     esi, esi
        cmp     cl, bl
        jbe     L_22d26
L_22d01:
        lea     edx, [eax + eax*2]
        mov     byte ptr [esi + edx*4 + g_857fa0], 0x1
        mov     edi, dword ptr [g_858138]
        mov     eax, edi
        and     eax, 0xff
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_85813b]
        inc     esi
        cmp     esi, ecx
        jc      L_22d01
L_22d26:
        and     edi, 0xff
        mov     edx, dword ptr [edi*4 + g_857f48]
        push    edx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00755460
        mov     eax, dword ptr [g_858138]
        and     eax, 0xff
        push    eax
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00722db0
        mov     ecx, dword ptr [g_858138]
        and     ecx, 0xff
        push    ecx
        call    FUN_007230c0
        mov     al, byte ptr [g_858138]
        pop     edi
        inc     al
        pop     esi
        mov     byte ptr [g_858138], al
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_22d82:
        mov     edx, dword ptr [g_858138]
        and     edx, 0xff
        mov     eax, dword ptr [edx*4 + g_857f48]
        push    eax
        call    FUN_00740db0
L_22d9b:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
