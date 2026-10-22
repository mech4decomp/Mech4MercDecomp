/*
 * FUN_006E5DF0 (587 B) — Multiplayer game setup/teardown.
 *
 * Loads a pilot resource, and either tears down (LoadStringA + virtual
 * call) or sets up a multiplayer game (copies strings into a global
 * object, allocates a 0x1c18-byte object, etc.).
 *
 * __cdecl, no params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b82b4;
extern int g_7dab44;
extern int g_7dab40;
extern int g_7dd268;
extern int g_7ddd10;
extern int g_7ddd14;
extern int g_7ddd0c;
extern int g_7b7e40;
extern int g_858a38;
extern char g_77a0c8[];
extern char g_77b510[];

extern void *g_76b574;   /* IAT: LoadStringA */

extern void __fastcall FUN_00412570(void *this, int a);
extern int __stdcall FUN_006fc4d0(int a);
extern void __stdcall FUN_006e4210(int a);
extern void __stdcall FUN_006e5910(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_0051fb70(void *this);
extern void __fastcall FUN_00536840(void *this, int a);
extern void __stdcall FUN_00701da0(void);
extern void __stdcall FUN_00405fa0(void);
extern void __stdcall FUN_00402f90(int a, int b, int c);
extern int __stdcall FUN_00701f20(int a, int b, int c);
extern void *__cdecl FUN_004084d0(int size);
extern void *__fastcall FUN_004cc3c0(void *this);
extern void __cdecl FUN_004c8eb0(int a, int b);
extern void __stdcall FUN_0053fa70(void);
extern void __fastcall FUN_005116e0(void *this);
extern int __cdecl FUN_006fab90(const char *fmt, ...);

__declspec(naked) void __cdecl FUN_006e5df0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x108
        push    esi
        push    offset g_77a0c8
        lea     ecx, [ebp - 4]
        call    FUN_00412570
        mov     eax, dword ptr [ebp - 4]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     L_6e5e8f
        mov     edx, dword ptr [g_7b82b4]
        push    0x100
        lea     ecx, [ebp - 0x108]
        push    ecx
        push    5
        push    edx
        call    dword ptr [g_76b574]        ; LoadStringA
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        push    0
        lea     edx, [ebp - 0x108]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        push    0x7546
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_006e4210
        add     esp, 0xc
        call    FUN_006e5910
        mov     eax, dword ptr [ebp - 4]
        test    eax, eax
        jz      L_6e6034
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6e6034
        push    eax
        call    FUN_004084e0
        add     esp, 4
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_6e5e8f:
        mov     ecx, dword ptr [g_7dd268]
        push    ebx
        push    edi
        call    FUN_0051fb70
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0xc]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536840
        call    FUN_00701da0
        call    FUN_00405fa0
        mov     eax, dword ptr [g_7ddd10]
        mov     ecx, dword ptr [g_7ddd14]
        mov     edx, dword ptr [g_7ddd0c]
        push    eax
        push    ecx
        push    edx
        call    FUN_00402f90
        push    0
        push    0
        push    0
        call    FUN_00701f20
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [g_7dab40]
        mov     edi, dword ptr [g_7ddd0c]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        add     edx, 0xc
        test    eax, eax
        setnz   al
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x17], al
        mov     eax, dword ptr [edx]
        or      ecx, 0xffffffff
        xor     eax, 0x85739531
        mov     ebx, dword ptr [eax + 0x50]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [ebx + 0x4f8]
        mov     dword ptr [ebp - 8], esi
        mov     esi, edi
        mov     edi, dword ptr [ebp - 8]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [g_7b7e40]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     ebx, 0x5f8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        pop     edi
        pop     ebx
        jz      L_6e6008
        mov     edx, dword ptr [edx]
        xor     edx, 0x85739531
        push    0x1c18
        mov     byte ptr [edx + 0x16], 1
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6e5fa7
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     L_6e5fa9
L_6e5fa7:
        xor     eax, eax
L_6e5fa9:
        push    5
        push    eax
        call    FUN_004c8eb0
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        add     esp, 8
        xor     ecx, 0x85739531
        call    FUN_0053fa70
        mov     ecx, dword ptr [g_7dd268]
        call    FUN_005116e0
        mov     eax, dword ptr [ebp - 4]
        test    eax, eax
        mov     dword ptr [g_858a38], 0x535260
        jz      L_6e5ffe
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6e5ffe
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6e5ffe:
        mov     eax, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_6e6008:
        push    offset g_77b510
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_6e601a
        int     3
L_6e601a:
        mov     eax, dword ptr [ebp - 4]
        test    eax, eax
        jz      L_6e6034
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6e6034
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6e6034:
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
