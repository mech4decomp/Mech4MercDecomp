/*
 * FUN_0051F270 (385 B) — data block 0x51EECC. Contains a small helper
 * (0x51F270, RET 0xC) that validates an index and returns a table value,
 * followed by a larger routine (0x51F2E0, RET 0xC) that walks the
 * XOR-obfuscated globals [0x7dab44]/[0x7dab40] (key 0x85739531), allocates
 * an object, and scans a linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern char g_779cdc[];

extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00416BC0(void);
extern void __cdecl FUN_00416CC0(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_0051F270(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0xff
        jle     L_285
        xor     eax, eax
        ret     0xc
L_285:
        test    ecx, ecx
        jge     L_28e
        xor     eax, eax
        ret     0xc
L_28e:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        lea     edx, [eax + 0xc]
        mov     eax, ecx
        shl     eax, 7
        add     eax, ecx
        shl     eax, 3
        sub     eax, ecx
        mov     ecx, dword ptr [edx]
        shl     eax, 3
        xor     ecx, 0x85739531
        push    ebx
        mov     bl, byte ptr [ecx + eax + 0x3538]
        test    bl, bl
        pop     ebx
        jne     L_2cb
        mov     eax, 8
        ret     0xc
L_2cb:
        mov     edx, dword ptr [edx]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + eax + 0x3548]
        ret     0xc
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        cmp     eax, 0xff
        push    ebx
        push    ebp
        push    esi
        push    edi
        jg      L_3d3
        test    eax, eax
        jl      L_3d3
        mov     edx, dword ptr [g_7dab44]
        mov     edi, dword ptr [edx]
        mov     ebp, dword ptr [g_7dab40]
        mov     esi, eax
        shl     esi, 7
        add     esi, eax
        shl     esi, 3
        sub     esi, eax
        xor     edi, ebp
        mov     eax, dword ptr [edi + 0xc]
        shl     esi, 3
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + esi + 0x3538]
        test    cl, cl
        je      L_3d3
        push    0x14
        xor     ebp, ebp
        call    FUN_004084D0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        je      L_369
        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x94]
        add     edx, 0x10
        push    edx
        mov     ecx, ebx
        call    FUN_00416BC0
        mov     dword ptr [ebx], offset g_779cdc
        jmp     L_36b
L_369:
        xor     ebx, ebx
L_36b:
        mov     ecx, ebx
        call    FUN_00416CC0
        test    eax, eax
        je      L_3c7
L_376:
        mov     edi, dword ptr [eax + 0x1c]
        test    edi, edi
        je      L_398
        mov     dl, byte ptr [edi - 1]
        lea     eax, [edi - 1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jne     L_398
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_398:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        mov     cl, byte ptr [edi]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + esi + 0x355c]
        cmp     al, cl
        je      L_3dc
        mov     ecx, ebx
        inc     ebp
        call    FUN_00416CC0
        test    eax, eax
        jne     L_376
L_3c7:
        test    ebx, ebx
        je      L_3d3
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]
L_3d3:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_3dc:
        test    ebx, ebx
        je      L_3e8
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
L_3e8:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
