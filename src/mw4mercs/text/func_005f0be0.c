/*
 * FUN_005f0be0 (199 B) — __stdcall, two params (int, char).
 *
 * Searches a global table (via obfuscated pointers 0x007dab44/0x007dab40)
 * for an entry matching param1; returns its +0x30 field if found.
 * Otherwise resolves a dropzone name ("PlayerStart" / "SecondaryLanceStart")
 * via FUN_004fca80, with an assert on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(void *p);
extern int __stdcall FUN_00545460(int v);
extern int __stdcall FUN_004fca80(const char *s);
extern int __stdcall FUN_006fab90(const char *s);

__declspec(naked) int __stdcall FUN_005f0be0(int param1, char param2)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        cmp     dword ptr [ebp + 0x8], 0x8
        push    ebx
        push    esi
        push    edi
        jz      L_3F
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        xor     ebx, ebx
        test    ecx, ecx
        mov     dword ptr [ebp - 4], ecx
        jle     L_3F
        mov     esi, dword ptr [eax + 0x20]
        add     esi, 0x14
L_14:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov     edi, eax
        test    edi, edi
        jz      L_34
        mov     edx, dword ptr [edi + 0x2C]
        push    edx
        call    FUN_00545460
        mov     ecx, dword ptr [ebp + 0x8]
        add     esp, 4
        cmp     eax, ecx
        jz      L_5A
L_34:
        mov     eax, dword ptr [ebp - 4]
        inc     ebx
        add     esi, 0x1C
        cmp     ebx, eax
        jl      L_14
L_3F:
        mov     al, byte ptr [ebp + 0xC]
        test    al, al
        jz      L_64
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        push    0x78A234
        jmp     L_77
L_5A:
        mov     eax, dword ptr [edi + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_64:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        push    0x77B380
L_77:
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     esi, eax
        cmp     esi, -0x1
        jnz     L_9E
        push    0x78A220
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_9E
        int     3
L_9E:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
