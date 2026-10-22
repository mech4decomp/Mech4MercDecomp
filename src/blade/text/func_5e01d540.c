/*
 * FUN_5e01d540 (449 B) — DirectDraw caps/format setup body (__stdcall, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a584;
extern int g_5e77a690;
extern int g_5e77a694;
extern int g_5e77a6a4;
extern int g_5e77a68c;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;

__declspec(naked) void __stdcall FUN_5e01d540(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        shl     ecx, 0x5
        shl     edx, 0x5
        mov     eax, dword ptr [ecx + g_5e77a588]
        push    ebx
        add     eax, 0xf
        push    esi
        sar     eax, 0x4
        mov     dword ptr [g_5e77a690], eax
        mov     esi, dword ptr [edx + g_5e77a588]
        add     esi, 0xf
        push    edi
        sar     esi, 0x4
        sub     esi, eax
        mov     dword ptr [g_5e77a694], esi
        jz      LD6FA
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     ecx, dword ptr [ecx + g_5e77a584]
        mov     esi, dword ptr [edx + g_5e77a584]
        mov     edi, dword ptr [edx + g_5e77a588]
        shl     eax, 0x4
        sub     esi, ecx
        sub     edi, ebx
        sub     eax, ebx
        add     ecx, 0x10
        imul    eax, esi
        imul    ecx, edi
        mov     ebx, edi
        lea     eax, [eax + ecx - 1]
        shl     ebx, 0x4
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x8], ebx
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      LD5FA
        mov     ecx, dword ptr [ebp + 0x8]
        js      LD5EC
        test    ecx, 0xffff0000
        jnz     LD5E6
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     LD5E6
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     LD5FA
LD5E6:
        xor     edx, edx
        div     ecx
        jmp     LD5FA
LD5EC:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      LD5FA
        dec     eax
        add     edx, ecx
LD5FA:
        mov     ecx, 0x5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 0x1
        cmp     ecx, eax
        jle     LD6FA
        test    esi, esi
        jl      LD657
        cmp     esi, edi
        jge     LD63B
        shl     esi, 0x4
        mov     dword ptr [g_5e77a698], 0x0
        mov     dword ptr [g_5e77a69c], esi
        jmp     LD6E8
LD63B:
        lea     ecx, [edi + edi]
        cmp     esi, ecx
        jge     LD68D
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a69c], esi
        jmp     LD6E8
LD657:
        lea     eax, [esi + edi]
        test    eax, eax
        jl      LD672
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     LD6E8
LD672:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      LD68D
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     LD6E8
LD68D:
        shl     esi, 0x4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      LD6DA
        mov     ecx, dword ptr [ebp + 0x8]
        js      LD6CC
        test    ecx, 0xffff0000
        jnz     LD6C6
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     LD6C6
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     LD6DA
LD6C6:
        xor     edx, edx
        div     ecx
        jmp     LD6DA
LD6CC:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      LD6DA
        dec     eax
        add     edx, ecx
LD6DA:
        mov     ecx, 0x5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a698
        mov     dword ptr [ecx], eax
LD6E8:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
LD6FA:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
