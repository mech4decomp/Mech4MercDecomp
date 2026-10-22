/*
 * FUN_00428660 (83 B) — MLR triangle/vertex setup. __fastcall (ECX=this).
 * Iterates over vertex indices, calls FUN_00765f80 for each triangle.
 *
 * CFLAGS: /O1
 * Match: target
 */

extern void __cdecl FUN_00765f80(void);

__declspec(naked) void FUN_00428660(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jle     L_4286b1
        push    ebx
        mov     ebx, dword ptr [esi + 0x5c]
        push    ebp
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        mov     esi, dword ptr [esi + 0x48]
        inc     esi
        mov     ebp, eax
        xor     eax, eax
L_42867b:
        mov     al, byte ptr [esi + 0x1]
        lea     ecx, [eax + eax*0x2]
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     edx, [edi + ecx*0x4]
        push    edx
        lea     eax, [eax + eax*0x2]
        lea     ecx, [edi + eax*0x4]
        xor     eax, eax
        mov     al, byte ptr [esi - 0x1]
        push    ecx
        mov     ecx, ebx
        lea     edx, [eax + eax*0x2]
        lea     eax, [edi + edx*0x4]
        push    eax
        call    FUN_00765f80
        add     ebx, 0x10
        add     esi, 0x3
        dec     ebp
        /* __emit: MSVC6 miscomputes backward JNZ rel-offset (0xCF vs ref 0xCD) due to call-reloc between branch and target */
        __emit 0x75
        __emit 0xCD
        pop     edi
        pop     ebp
        pop     ebx
L_4286b1:
        pop     esi
        ret
    }
}
