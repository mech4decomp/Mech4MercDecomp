/*
 * FUN_10033750 (96 B) — __stdcall, RET 0x8.
 * List-node removal helper (unlink node, free, decrement count).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10033750(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edx]
        cmp     eax, edx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        jz      loc_1003377B
    loop_10033763:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      loc_1003376F
        add     ecx, 0x18
        jmp     loc_10033771
    loc_1003376F:
        xor     ecx, ecx
    loc_10033771:
        cmp     ecx, edi
        jz      loc_1003377B
        mov     eax, dword ptr [eax]
        cmp     eax, edx
        jnz     loop_10033763
    loc_1003377B:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [ecx + 0x4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x8]
        add     esp, 0x4
        dec     ecx
        test    edi, edi
        mov     dword ptr [esi + 0x8], ecx
        jz      loc_100337AB
        lea     ecx, [edi - 0x18]
        test    ecx, ecx
        jz      loc_100337AB
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    loc_100337AB:
        pop     edi
        pop     esi
        ret     0x8
    }
}
