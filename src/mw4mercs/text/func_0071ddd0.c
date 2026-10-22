/*
 * FUN_0071ddd0 (extent 0x71ddd0-0x71deb1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b3a4;
extern int    g_0076b4f8;

__declspec(naked) void FUN_0071ddd0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    eax
        push    0x7a4608
        push    0x87d894
        call    dword ptr [g_0076b4f8]
        add    esp, 0xc
        mov    eax, 0x87d894
        ret    4
        sub    esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        lea    ebp, [edi + 0x80000]
        xor    esi, esi
        xor    ecx, ecx
        shr    ebp, 0x14
L_de08:
        xor    edx, edx
        mov    ebx, 0xa
        mov    eax, edi
        div    ebx
        mov    ebx, 3
        add    dl, 0x30
        mov    byte ptr [esp + ecx + 0x10], dl
        inc    ecx
        inc    esi
        xor    edx, edx
        mov    eax, esi
        div    ebx
        test    edx, edx
        jne    L_de31
        mov    byte ptr [esp + ecx + 0x10], 0x2c
        inc    ecx
L_de31:
        mov    eax, 0xcccccccd
        mul    edi
        shr    edx, 3
        mov    edi, edx
        jne    L_de08
        cmp    byte ptr [esp + ecx + 0xf], 0x2c
        jne    L_de47
        dec    ecx
L_de47:
        lea    eax, [esp + 0x10]
        push    eax
        mov    byte ptr [esp + ecx + 0x14], 0
        call    dword ptr [g_0076b3a4]
        mov    al, byte ptr [esp + 0x3c]
        add    esp, 4
        test    al, al
        je    L_de8a
        push    ebp
        lea    ecx, [esp + 0x14]
        push    ecx
        push    0x7a461c
        push    0x87d854
        call    dword ptr [g_0076b4f8]
        add    esp, 0x10
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x87d854
        pop    ebx
        add    esp, 0x20
        ret    8
L_de8a:
        lea    edx, [esp + 0x10]
        push    edx
        push    0x7a4610
        push    0x87d854
        call    dword ptr [g_0076b4f8]
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x87d854
        pop    ebx
        add    esp, 0x20
        ret    8
    }
}
