/*
 * FUN_0073A470 (505 B) — __stdcall (ret 0x10). Registers a new entry in a
 * global table indexed by [0x857f28]; zeroes a 0x9c-dword slot, copies a
 * 16-byte key, calls a table-init callback, allocates a 0x400 buffer, etc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_857f28;      /* 0x857f28 - global table count/index */
extern int   g_857f2c;      /* 0x857f2c */
extern char  g_856938[];    /* 0x856938 - table base */
extern char  g_87dd0a;      /* 0x87dd0a - byte flag */
extern int   g_858994;      /* 0x858994 */
extern void (*g_76b320)(void);   /* 0x76b320 - callback fn ptr */
extern void (*g_76b304)(void);   /* 0x76b304 - IAT */
extern void (*g_76b294)(void);   /* 0x76b294 - IAT */
extern void (*g_76b2d0)(void);   /* 0x76b2d0 - IAT */

extern void __cdecl FUN_007189C0(void);
extern void __cdecl FUN_00757E20(void);
extern void __cdecl FUN_00757DE0(void);
extern void __cdecl FUN_00740DB0(void);

__declspec(naked) void FUN_0073A470(void)
{
    __asm {
        mov     edx, dword ptr [g_857f28]
        sub     esp, 0xc
        test    edx, edx
        jne     L_73A48D
        mov     eax, 1
        mov     dword ptr [g_857f28], eax
        add     esp, 0xc
        ret     0x10
L_73A48D:
        cmp     edx, 8
        jne     L_73A49A
        xor     eax, eax
        add     esp, 0xc
        ret     0x10
L_73A49A:
        push    esi
        lea     esi, [edx + edx*4]
        xor     eax, eax
        shl     esi, 3
        sub     esi, edx
        push    edi
        shl     esi, 4
        lea     edi, [esi + 0x856938]
        mov     ecx, 0x9c
        rep stosd
        mov     eax, dword ptr [g_857f28]
        mov     edi, dword ptr [esp + 0x18]
        lea     ecx, [eax + eax*4]
        shl     ecx, 3
        sub     ecx, eax
        mov     esi, dword ptr [g_76b320]
        shl     ecx, 4
        lea     edx, [ecx + 0x856938]
        mov     eax, edi
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [edx + 8], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx + 0xc], eax
        mov     eax, dword ptr [g_857f28]
        lea     edx, [eax + eax*4]
        shl     edx, 3
        sub     edx, eax
        push    0x7f
        shl     edx, 4
        push    ecx
        lea     eax, [edx + 0x856948]
        push    eax
        call    esi
        mov     eax, dword ptr [g_857f28]
        mov     ecx, dword ptr [esp + 0x2c]
        lea     edx, [eax + eax*4]
        shl     edx, 3
        sub     edx, eax
        push    0x7f
        shl     edx, 4
        push    ecx
        lea     eax, [edx + 0x8569c8]
        push    eax
        call    esi
        mov     eax, dword ptr [g_857f28]
        lea     ecx, [eax + eax*4]
        shl     ecx, 3
        sub     ecx, eax
        shl     ecx, 4
        lea     edx, [ecx + 0x8569c8]
        push    edx
        call    dword ptr [g_76b304]
        push    0x400
        call    dword ptr [g_76b294]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x28], 0x400
        mov     dword ptr [esp + 0x2c], 0
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [g_857f28]
        lea     ecx, [eax + eax*4]
        shl     ecx, 3
        sub     ecx, eax
        add     esp, 0x20
        shl     ecx, 4
        push    1
        lea     edx, [ecx + 0x8569c8]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_007189C0
        mov     eax, dword ptr [g_857f28]
        mov     ecx, dword ptr [esp + 0x10]
        push    0xff
        lea     edx, [eax + eax*4]
        push    ecx
        shl     edx, 3
        sub     edx, eax
        shl     edx, 4
        lea     eax, [edx + 0x856a48]
        push    eax
        call    esi
        add     esp, 0xc
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00757E20
        test    eax, eax
        pop     edi
        mov     byte ptr [g_87dd0a], 0
        pop     esi
        jl      L_73A64A
        mov     eax, dword ptr [g_857f28]
        lea     edx, [eax + eax*4]
        shl     edx, 3
        sub     edx, eax
        shl     edx, 4
        mov     dword ptr [edx + 0x856b48], 0x60
        mov     eax, dword ptr [g_857f28]
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*4]
        shl     ecx, 3
        sub     ecx, eax
        shl     ecx, 4
        add     ecx, 0x856b48
        push    ecx
        push    edx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00757DE0
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00740DB0
        mov     ecx, dword ptr [g_857f28]
        lea     eax, [ecx - 1]
        cmp     dword ptr [g_858994], eax
        mov     byte ptr [g_87dd0a], 0
        jne     L_73A64A
        mov     dword ptr [g_857f2c], eax
L_73A64A:
        inc     dword ptr [g_857f28]
        mov     edx, dword ptr [esp + 8]
        push    edx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        mov     eax, 1
        add     esp, 0xc
        ret     0x10
    }
}
