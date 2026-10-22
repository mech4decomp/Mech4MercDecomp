/*
 * FUN_00626520 (717 B) — ABL interpreter object constructor (__fastcall,
 * ECX=this). Initializes a large object: sets up two sub-object vtables
 * (0x7716ac, 0x773328), the main vtable 0x78d04c, allocates several
 * sub-objects via FUN_004084d0 + ctor calls, zeroes a big field block,
 * and copies default strings ("No Point Selected"/"No Target"/"No Name")
 * into buffers allocated by FUN_006f3c80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858940;
extern int g_007716ac;
extern int g_00773328;
extern int g_0078d04c;
extern char g_0078d038[];
extern char g_0078d02c[];
extern char g_0078d024[];

extern void __cdecl FUN_006f3160(void);
extern void __cdecl FUN_0041fc80(void);
extern void *__cdecl FUN_004084d0(void);
extern void *__cdecl FUN_005bf9d0(void);
extern void *__cdecl FUN_00630820(void);
extern void *__cdecl FUN_0063b900(void);
extern void *__cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00628330(void);

__declspec(naked) void FUN_00626520(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        call    FUN_006f3160
        lea     esi, [ebp + 0x44]
        xor     ebx, ebx
        push    ebx
        mov     ecx, esi
        call    FUN_0041fc80
        mov     dword ptr [esi], offset g_007716ac
        lea     esi, [ebp + 0x5c]
        push    ebx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x4c], ebx
        mov     dword ptr [ebp + 0x50], ebx
        mov     dword ptr [ebp + 0x54], ebx
        mov     dword ptr [ebp + 0x58], ebx
        call    FUN_0041fc80
        mov     al, byte ptr [esp + 0x13]
        mov     dword ptr [esi], offset g_00773328
        mov     dword ptr [ebp + 0xf8], ebx
        mov     byte ptr [ebp + 0x100], al
        mov     dword ptr [ebp + 0x100], ebx
        push    0x20
        mov     dword ptr [ebp + 0xfc], ebx
        mov     byte ptr [ebp + 0x169], bl
        mov     dword ptr [ebp], offset g_0078d04c
        mov     dword ptr [ebp + 0x164], ebx
        mov     byte ptr [ebp + 0x64], bl
        mov     byte ptr [ebp + 0x170], bl
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      LAB_6265ad
        mov     ecx, eax
        call    FUN_005bf9d0
        mov     esi, eax
        jmp     LAB_6265af

LAB_6265ad:
        xor     esi, esi

LAB_6265af:
        push    0x40
        mov     dword ptr [ebp + 0x4c], esi
        mov     dword ptr [ebp + 0x160], ebx
        mov     byte ptr [ebp + 0x168], bl
        mov     dword ptr [ebp + 0x108], ebx
        mov     dword ptr [ebp + 0x10c], ebx
        mov     dword ptr [ebp + 0x110], ebx
        mov     dword ptr [ebp + 0x114], ebx
        mov     dword ptr [ebp + 0x118], ebx
        mov     dword ptr [ebp + 0x120], ebx
        mov     dword ptr [ebp + 0x11c], ebx
        mov     dword ptr [ebp + 0x124], ebx
        mov     dword ptr [ebp + 0x128], ebx
        mov     dword ptr [ebp + 0x12c], ebx
        mov     dword ptr [ebp + 0x130], ebx
        mov     dword ptr [ebp + 0x134], ebx
        mov     dword ptr [ebp + 0x138], ebx
        mov     dword ptr [ebp + 0x13c], ebx
        mov     dword ptr [ebp + 0x140], ebx
        mov     dword ptr [ebp + 0x144], ebx
        mov     dword ptr [ebp + 0x148], ebx
        mov     dword ptr [ebp + 0x14c], ebx
        mov     dword ptr [ebp + 0x150], ebx
        mov     dword ptr [ebp + 0x154], ebx
        mov     dword ptr [ebp + 0x158], ebx
        mov     dword ptr [ebp + 0x104], ebx
        mov     dword ptr [ebp + 0x15c], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      LAB_62665f
        mov     ecx, eax
        call    FUN_00630820
        jmp     LAB_626661

LAB_62665f:
        xor     eax, eax

LAB_626661:
        push    0x20
        mov     dword ptr [ebp + 0x50], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      LAB_62667b
        mov     ecx, eax
        call    FUN_0063b900
        jmp     LAB_62667d

LAB_62667b:
        xor     eax, eax

LAB_62667d:
        mov     ecx, dword ptr [g_00858940]
        mov     dword ptr [ebp + 0x54], eax
        mov     eax, 0xbf800000
        push    ebx
        push    0x80
        mov     byte ptr [ebp + 0x16c], bl
        mov     byte ptr [ebp + 0x16f], bl
        mov     byte ptr [ebp + 0x16d], bl
        mov     dword ptr [ebp + 0x38], ecx
        mov     dword ptr [esi + 0x1c], ebp
        mov     dword ptr [ebp + 0x74], ebx
        mov     dword ptr [ebp + 0x7c], ebx
        mov     dword ptr [ebp + 0x78], ebx
        mov     dword ptr [ebp + 0x3c], 0x2
        mov     byte ptr [ebp + 0x16e], bl
        mov     dword ptr [ebp + 0xe0], ebx
        mov     dword ptr [ebp + 0xf4], ebx
        mov     dword ptr [ebp + 0xd0], eax
        mov     dword ptr [ebp + 0xd4], eax
        mov     dword ptr [ebp + 0xd8], ebx
        mov     dword ptr [ebp + 0xdc], ebx
        mov     dword ptr [ebp + 0xac], ebx
        mov     dword ptr [ebp + 0xb0], ebx
        mov     dword ptr [ebp + 0xb4], eax
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, offset g_0078d038
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [ebp + 0xb8], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        push    ebx
        and     ecx, 0x3
        push    0x80
        rep     movsb
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, offset g_0078d02c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [ebp + 0x9c], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        push    ebx
        push    0x80
        mov     byte ptr [ebp + 0xa0], bl
        mov     dword ptr [ebp + 0xa4], ebx
        mov     dword ptr [ebp + 0xa8], 0x447a0000
        mov     dword ptr [ebp + 0x84], ebx
        mov     dword ptr [ebp + 0x88], ebx
        mov     dword ptr [ebp + 0xe4], ebx
        mov     dword ptr [ebp + 0xe8], ebx
        mov     dword ptr [ebp + 0xec], 0xbf800000
        call    FUN_006f3c80
        mov     edx, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_0078d024
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     dword ptr [ebp + 0xf0], edx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, ebp
        call    FUN_00628330
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x8c], ebx
        mov     dword ptr [ebp + 0x90], ebx
        mov     dword ptr [ebp + 0x94], ebx
        mov     dword ptr [ebp + 0x98], ebx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
