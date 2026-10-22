/*
 * FUN_0066b10a (extent 0x66b10a-0x66b350) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0066bde0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0066b10a(void)
{
    __asm {
        mov    edi, edi
        /* jump table DATA (8 relocated DWORDs) belonging to the preceding
           function (targets 0x66B0B3..0x66B0E0). MSVC6 inline asm has no data
           directive (dd), and this table sits INSIDE the diff slice (not
           masked), so the literal patched addresses are emitted. */
        __emit 0xB3
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xE9
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xB3
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xBC
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xC5
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xCE
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xD7
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        __emit 0xE0
        __emit 0xB0
        __emit 0x66
        __emit 0x00
        nop
        nop
        nop
        nop
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        dec    eax
        cmp    eax, 7
        ja    L_b336
        jmp    dword ptr [eax*4 + 0x66b350]
        push    0x3c
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796d84
        mov    dword ptr [eax + 0x34], edx
        mov    dword ptr [eax + 0x30], edx
        pop    ebp
        ret    4
        push    0x3c
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796d68
        mov    dword ptr [eax + 0x34], edx
        mov    dword ptr [eax + 0x30], edx
        pop    ebp
        ret    4
        push    0x44
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796d4c
        mov    dword ptr [eax + 0x34], edx
        mov    dword ptr [eax + 0x30], edx
        pop    ebp
        ret    4
        push    0x40
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796d30
        mov    dword ptr [eax + 0x34], edx
        mov    dword ptr [eax + 0x30], edx
        pop    ebp
        ret    4
        push    0x9c
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796d14
        mov    dword ptr [eax + 0x4c], edx
        mov    dword ptr [eax + 0x50], edx
        mov    dword ptr [eax + 0x54], edx
        mov    dword ptr [eax + 0x58], edx
        mov    dword ptr [eax + 0x5c], edx
        mov    dword ptr [eax + 0x60], edx
        mov    dword ptr [eax + 0x64], edx
        mov    dword ptr [eax + 0x68], edx
        mov    dword ptr [eax + 0x6c], edx
        mov    dword ptr [eax + 0x70], edx
        mov    dword ptr [eax + 0x74], edx
        mov    dword ptr [eax + 0x78], edx
        mov    dword ptr [eax + 0x7c], edx
        mov    dword ptr [eax + 0x80], edx
        mov    dword ptr [eax + 0x84], edx
        mov    dword ptr [eax + 0x88], edx
        mov    dword ptr [eax + 0x8c], edx
        mov    dword ptr [eax + 0x90], edx
        mov    dword ptr [eax + 0x94], edx
        mov    dword ptr [eax + 0x98], edx
        pop    ebp
        ret    4
        push    0x6c
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796cf8
        mov    dword ptr [eax + 0x44], edx
        mov    dword ptr [eax + 0x48], edx
        mov    dword ptr [eax + 0x4c], edx
        mov    dword ptr [eax + 0x50], edx
        mov    dword ptr [eax + 0x54], edx
        mov    dword ptr [eax + 0x58], edx
        mov    dword ptr [eax + 0x5c], edx
        mov    dword ptr [eax + 0x60], edx
        mov    dword ptr [eax + 0x64], edx
        mov    dword ptr [eax + 0x68], edx
        pop    ebp
        ret    4
        push    0x54
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    dword ptr [eax + 0x20], 0xbf800000
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x24], edx
        mov    byte ptr [eax + 0x1c], dl
        mov    dword ptr [eax], 0x796cdc
        mov    dword ptr [eax + 0x44], edx
        mov    dword ptr [eax + 0x48], edx
        mov    dword ptr [eax + 0x4c], edx
        mov    dword ptr [eax + 0x50], edx
        pop    ebp
        ret    4
        push    0x64
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_b348
        mov    ecx, eax
        call    FUN_0066bde0
        pop    ebp
        ret    4
L_b336:
        push    0x796c9c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_b348
        int 3    
L_b348:
        xor    eax, eax
        pop    ebp
        ret    4
        mov    edi, edi
        // jump-table data @ 0x0066B350 (0 relocated pointers)
    }
}
