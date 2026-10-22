/*
 * FUN_00727190 (820 B) — __thiscall (ECX = this) sound/audio stream setup.
 *
 * Initializes a sound object (zeroes a 9-dword region at this+0xc8, sets
 * format/flag fields), queries a global config object (0x856b8c) for flags,
 * copies a 4-float constant block (0x7a3210) into this+0xdc, and builds a
 * WAVEFORMATEX-style descriptor on the stack. Depending on the format word
 * (1 = PCM, 2 = MSADPCM) it either fills a buffer via a memcpy path or a
 * memset path, then calls the heap allocator FUN_006f4940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_856b8c;
extern char  g_8589a0;
extern int   g_7a3210;
extern int   g_7a3214;
extern int   g_7a3218;
extern int   g_7a321c;
extern char  g_87dd0a;
extern int   g_8aadc8;

extern void __cdecl FUN_00757410(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007589a0(void);
extern void __cdecl FUN_007588c0(void);
extern void __cdecl FUN_00758950(void);
extern void __cdecl FUN_00757d70(void);
extern void __cdecl FUN_00757a20(void);
extern void __cdecl FUN_00758790(void);
extern void __cdecl FUN_007587e0(void);
extern void __cdecl FUN_00758830(void);
extern void __cdecl FUN_00757a90(void);
extern void __cdecl FUN_00758880(void);
extern void __cdecl FUN_006f4940(void);

__declspec(naked) void FUN_00727190(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8c
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edx, [esi + 0xc8]
        xor     eax, eax
        mov     ecx, 9
        mov     edi, edx
        rep stosd
        mov     bl, byte ptr [esi + 0xb0]
        test    bl, bl
        mov     eax, dword ptr [esi + 0x14]
        mov     edi, dword ptr [esi + 0x20]
        mov     dword ptr [edx], 0x24
        mov     dword ptr [esi + 0xd0], eax
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xcc], 0xe0
        jne     L_7271e5
        mov     dword ptr [esi + 0xcc], 0xf0
L_7271e5:
        mov     ecx, dword ptr [g_856b8c]
        mov     edx, dword ptr [ecx + 0x14]
        mov     eax, 0x10000
        __emit 0x85          /* TEST EAX,EDX (85 D0) -- MSVC6 reverses to TEST EDX,EAX (85 C2) */
        __emit 0xD0
        je      L_7271fd
        or      dword ptr [esi + 0xcc], eax
L_7271fd:
        call    FUN_00757410
        test    bl, bl
        mov     ecx, dword ptr [g_856b8c]
        mov     al, byte ptr [g_8589a0]
        jne     L_72725d
        mov     edx, dword ptr [ecx + 0x48]
        test    edx, edx
        je      L_727225
        test    al, al
        je      L_727225
        or      dword ptr [esi + 0xcc], 0x10
        jmp     L_72725d
L_727225:
        mov     edx, dword ptr [esi + 0xcc]
        mov     ebx, dword ptr [g_7a3210]
        or      edx, 0x18
        mov     dword ptr [esi + 0xcc], edx
        lea     edx, [esi + 0xdc]
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [g_7a3214]
        mov     dword ptr [edx + 4], ebx
        mov     ebx, dword ptr [g_7a3218]
        mov     dword ptr [edx + 8], ebx
        mov     ebx, dword ptr [g_7a321c]
        mov     dword ptr [edx + 0xc], ebx
L_72725d:
        test    al, al
        jne     L_727268
        or      dword ptr [esi + 0xcc], 8
L_727268:
        cmp     word ptr [edi], 1
        je      L_72743b
        cmp     word ptr [edi], 2
        je      L_72728a
        push    0x7a5568
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      L_72728a
        int     3
L_72728a:
        mov     edi, dword ptr [esi + 0x20]
        xor     eax, eax
        push    0x10000
        mov     dword ptr [ebp - 0x38], eax
        push    0x12
        mov     dword ptr [ebp - 0x34], eax
        lea     ecx, [ebp - 0x38]
        push    ecx
        mov     dword ptr [ebp - 0x30], eax
        push    edi
        mov     dword ptr [ebp - 0x2c], eax
        xor     ebx, ebx
        push    ebx
        mov     word ptr [ebp - 0x28], ax
        mov     word ptr [ebp - 0x38], 1
        mov     byte ptr [g_87dd0a], 1
        call    FUN_007589a0
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        je      L_7272dc
        push    0x10000
        push    0x12
        lea     edx, [ebp - 0x38]
        push    edx
        push    edi
        push    ebx
        call    FUN_007589a0
L_7272dc:
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        lea     eax, [ebp - 0x38]
        push    eax
        push    edi
        push    ebx
        lea     ecx, [ebp - 4]
        push    ecx
        mov     dword ptr [ebp - 4], ebx
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 8], ebx
        call    FUN_007588c0
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [ebp - 4]
        push    ebx
        lea     edx, [ebp - 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_00758950
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 4]
        push    1
        lea     edx, [ebp - 0x14]
        push    edx
        push    eax
        push    ecx
        call    FUN_00758950
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, dword ptr [g_856b8c]
        mov     dword ptr [esi + 0xd0], eax
        push    ebx
        lea     eax, [esi + 0x58]
        push    eax
        lea     edx, [ebp - 0x38]
        lea     eax, [esi + 0xc8]
        mov     dword ptr [esi + 0xd8], edx
        mov     edx, dword ptr [ecx + 0xc]
        push    eax
        push    edx
        call    FUN_00757d70
        mov     ebx, dword ptr [esi + 0xd0]
        push    0
        xor     eax, eax
        mov     ecx, 0x15
        lea     edi, [ebp - 0x8c]
        rep stosd
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     edx, [ebp - 0x20]
        push    edx
        push    ebx
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [esi + 0x58]
        push    0
        push    eax
        mov     dword ptr [ebp - 0x24], eax
        call    FUN_00757a20
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [ebp - 8]
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [ebp - 0x7c], ecx
        push    0
        lea     ecx, [ebp - 0x8c]
        mov     dword ptr [ebp - 0x80], edx
        mov     edx, dword ptr [ebp - 4]
        mov     dword ptr [ebp - 0x6c], eax
        mov     eax, dword ptr [ebp - 0x20]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x8c], 0x54
        mov     dword ptr [ebp - 0x70], eax
        call    FUN_00758790
        push    4
        lea     eax, [ebp - 0x8c]
        mov     ecx, dword ptr [ebp - 4]
        push    eax
        push    ecx
        call    FUN_007587e0
        mov     eax, dword ptr [ebp - 4]
        push    0
        lea     edx, [ebp - 0x8c]
        push    edx
        push    eax
        call    FUN_00758830
        mov     edi, dword ptr [ebp - 0x68]
        mov     ecx, dword ptr [ebp - 8]
        mov     edx, dword ptr [esi + 0x20]
        sub     ecx, edi
        xor     eax, eax
        cmp     word ptr [edx + 0xe], 8
        mov     edx, dword ptr [ebp - 0x20]
        setne   al
        add     edi, edx
        mov     esi, ecx
        shr     ecx, 2
        dec     eax
        and     eax, 0x80
        mov     dl, al
        mov     dh, dl
        mov     eax, edx
        shl     eax, 0x10
        mov     ax, dx
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0xc]
        push    eax
        mov     eax, dword ptr [ebp - 0x70]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x24]
        push    edx
        push    eax
        push    ecx
        call    FUN_00757a90
        mov     edx, dword ptr [ebp - 4]
        push    0
        push    edx
        call    FUN_00758880
        jmp     L_7274ae
L_72743b:
        push    0
        lea     edi, [esi + 0x58]
        push    edi
        lea     eax, [esi + 0xc8]
        push    eax
        mov     dword ptr [ebp - 0x10], 0
        mov     eax, dword ptr [ecx + 0xc]
        push    eax
        call    FUN_00757d70
        mov     ebx, dword ptr [esi + 0xd0]
        mov     edi, dword ptr [edi]
        push    0
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     edx, [ebp - 0x14]
        push    edx
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    ebx
        push    0
        push    edi
        mov     dword ptr [ebp - 0x24], edi
        call    FUN_00757a20
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x18]
        mov     esi, dword ptr [esi + 0xc]
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0xc]
        push    eax
        mov     eax, dword ptr [ebp - 0x18]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x24]
        push    edx
        push    eax
        push    ecx
        call    FUN_00757a90
L_7274ae:
        mov     edx, dword ptr [g_8aadc8]
        push    1
        push    ebx
        push    edx
        call    FUN_006f4940
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
