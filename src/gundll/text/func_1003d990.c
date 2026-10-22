/*
 * FUN_1003d990 (251 B) — __cdecl.
 * Allocates a 0x8000-byte block and links it into a free-list structure.
 */

extern int *g_10049148;

__declspec(naked) void FUN_1003d990(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [ecx + 0x8]
        xor     ebx, ebx
    loc_1003d9a2:
        test    eax, eax
        jl      loc_1003d9ab
        shl     eax, 0x1
        inc     ebx
        jmp     loc_1003d9a2
    loc_1003d9ab:
        mov     eax, ebx
        push    0x3f
        imul    eax, eax, 0x204
        pop     edx
        lea     eax, [eax + esi + 0x144]
        mov     dword ptr [ebp - 0x4], eax
    loc_1003d9c0:
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], eax
        add     eax, 0x8
        dec     edx
        jnz     loc_1003d9c0
        mov     edi, ebx
        push    0x4
        shl     edi, 0xf
        add     edi, dword ptr [ecx + 0xC]
        push    0x1000
        push    0x8000
        push    edi
        call    dword ptr [g_10049148]
        test    eax, eax
        jnz     loc_1003d9f3
        or      eax, 0xffffffff
        jmp     loc_1003da86
    loc_1003d9f3:
        lea     edx, [edi + 0x7000]
        cmp     edi, edx
        ja      loc_1003da39
        lea     eax, [edi + 0x10]
    loc_1003da00:
        or      dword ptr [eax - 0x8], 0xffffffff
        or      dword ptr [eax + 0xfec], 0xffffffff
        lea     ecx, [eax + 0xffc]
        mov     dword ptr [eax - 0x4], 0xff0
        mov     dword ptr [eax], ecx
        lea     ecx, [eax - 0x1004]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0xfe8], 0xff0
        add     eax, 0x1000
        lea     ecx, [eax - 0x10]
        cmp     ecx, edx
        jbe     loc_1003da00
    loc_1003da39:
        mov     eax, dword ptr [ebp - 0x4]
        lea     ecx, [edi + 0xC]
        add     eax, 0x1f8
        push    0x1
        pop     edi
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [ecx + 0x8], eax
        lea     ecx, [edx + 0xC]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [ecx + 0x4], eax
        and     dword ptr [esi + ebx*0x4 + 0x44], 0x0
        mov     dword ptr [esi + ebx*0x4 + 0xc4], edi
        mov     al, byte ptr [esi + 0x43]
        mov     cl, al
        inc     cl
        test    al, al
        mov     eax, dword ptr [ebp + 0x8]
        mov     byte ptr [esi + 0x43], cl
        jnz     loc_1003da76
        or      dword ptr [eax + 0x4], edi
    loc_1003da76:
        mov     edx, 0x80000000
        mov     ecx, ebx
        shr     edx, cl
        not     edx
        and     dword ptr [eax + 0x8], edx
        mov     eax, ebx
    loc_1003da86:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
