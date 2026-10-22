/*
 * data_00513f1f.c block (util) -- 325 bytes. Object factory/registration:
 * allocates an object (FUN_004084D0), initializes it via FUN_00416BC0 with a
 * vtable (0x779cdc), walks a linked list, then updates a global string table
 * (0x7dd268 + 0x40994) and a hash table (0x7dab44 XOR 0x7dab40 / 0x85739531).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00416BC0(void);
extern char g_779cdc[];
extern void __cdecl FUN_00416CC0(void);
extern void __cdecl FUN_004084E0(void);
extern int g_7dd268;
extern int g_7db090;
extern void __cdecl FUN_005330C0(void);

__declspec(naked) void FUN_00514230(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        push    ebx
        mov     ebx, dword ptr [ecx]
        push    esi
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + 0x94]
        mov     edx, dword ptr [eax + 0x10]
        lea     ecx, [eax + 0x10]
        push    edi
        call    dword ptr [edx + 0x10]
        cmp     ebx, eax
        jle     L514267
        xor     ebx, ebx
L514267:
        mov     eax, dword ptr [g_7dab44]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [g_7dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L5142A8
        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x94]
        add     edx, 0x10
        push    edx
        mov     ecx, esi
        call    FUN_00416BC0
        mov     dword ptr [esi], offset g_779cdc
        jmp     L5142AA
L5142A8:
        xor     esi, esi
L5142AA:
        test    ebx, ebx
        jle     L5142B8
L5142AE:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        dec     ebx
        jne     L5142AE
L5142B8:
        mov     ecx, esi
        call    FUN_00416CC0
        test    eax, eax
        je      L5142F7
        mov     ebx, dword ptr [eax + 0x1c]
        test    ebx, ebx
        je      L5142E5
        mov     dl, byte ptr [ebx - 1]
        lea     eax, [ebx - 1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jne     L5142E5
        push    eax
        call    FUN_004084E0
        add     esp, 4
L5142E5:
        mov     ecx, dword ptr [g_7dd268]
        mov     dl, byte ptr [ebx]
        lea     edi, [ecx + 0x40994]
        mov     byte ptr [edi], dl
        jmp     L514305
L5142F7:
        mov     eax, dword ptr [g_7dd268]
        lea     edi, [eax + 0x40994]
        mov     byte ptr [edi], 0x5f
L514305:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [g_7db090]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        add     edx, 0xc
        mov     eax, ecx
        shl     eax, 7
        add     eax, ecx
        shl     eax, 3
        sub     eax, ecx
        mov     cl, byte ptr [edi]
        mov     edi, dword ptr [edx]
        shl     eax, 3
        xor     edi, 0x85739531
        cmp     byte ptr [edi + eax + 0x355c], cl
        je      L51435E
        mov     edi, dword ptr [edx]
        xor     edi, 0x85739531
        mov     byte ptr [edi + eax + 0x355c], cl
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        call    FUN_005330C0
L51435E:
        test    esi, esi
        je      L51436A
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
L51436A:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0xc
    }
}
