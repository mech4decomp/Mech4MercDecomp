/*
 * FUN_1003c164 (318 B) — __cdecl.
 * SEH exception filter: maps NTSTATUS codes to a byte status and invokes
 * a registered handler, else defers to UnhandledExceptionFilter.
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10038512(void);
extern void __cdecl FUN_1003c2a2(void);

extern void (__stdcall *g_10049138)(void);
extern int g_10051e58;
extern int g_10051e5c;

__declspec(naked) void FUN_1003c164(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        call    FUN_10038512
        mov     esi, eax
        push    dword ptr [esi + 0x50]
        push    dword ptr [ebp + 8]
        call    FUN_1003c2a2
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_c295
        mov     ebx, dword ptr [eax + 8]
        test    ebx, ebx
        mov     dword ptr [ebp + 8], ebx
        jz      L_c295
        cmp     ebx, 5
        jnz     L_c1a5
        and     dword ptr [eax + 8], 0
        push    1
        pop     eax
        jmp     L_c29e
    L_c1a5:
        cmp     ebx, 1
        jz      L_c290
        mov     ecx, dword ptr [esi + 0x54]
        mov     dword ptr [ebp - 4], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x54], ecx
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, 8
        jnz     L_c282
        mov     edx, dword ptr [g_10051e58]
        mov     ecx, dword ptr [g_10051e5c]
        add     ecx, edx
        push    edi
        cmp     edx, ecx
        jge     L_c200
        lea     ecx, [edx + edx*2]
        shl     ecx, 2
    L_c1df:
        mov     edi, dword ptr [esi + 0x50]
        add     ecx, 0xc
        and     dword ptr [ecx + edi - 4], 0
        mov     edi, dword ptr [g_10051e58]
        mov     ebx, dword ptr [g_10051e5c]
        inc     edx
        add     ebx, edi
        cmp     edx, ebx
        jl      L_c1df
        mov     ebx, dword ptr [ebp + 8]
    L_c200:
        mov     eax, dword ptr [eax]
        mov     edi, dword ptr [esi + 0x58]
        cmp     eax, 0xc000008e
        jnz     L_c215
        mov     dword ptr [esi + 0x58], 0x83
        jmp     L_c273
    L_c215:
        cmp     eax, 0xc0000090
        jnz     L_c225
        mov     dword ptr [esi + 0x58], 0x81
        jmp     L_c273
    L_c225:
        cmp     eax, 0xc0000091
        jnz     L_c235
        mov     dword ptr [esi + 0x58], 0x84
        jmp     L_c273
    L_c235:
        cmp     eax, 0xc0000093
        jnz     L_c245
        mov     dword ptr [esi + 0x58], 0x85
        jmp     L_c273
    L_c245:
        cmp     eax, 0xc000008d
        jnz     L_c255
        mov     dword ptr [esi + 0x58], 0x82
        jmp     L_c273
    L_c255:
        cmp     eax, 0xc000008f
        jnz     L_c265
        mov     dword ptr [esi + 0x58], 0x86
        jmp     L_c273
    L_c265:
        cmp     eax, 0xc0000092
        jnz     L_c273
        mov     dword ptr [esi + 0x58], 0x8a
    L_c273:
        push    dword ptr [esi + 0x58]
        push    8
        call    ebx
        pop     ecx
        mov     dword ptr [esi + 0x58], edi
        pop     ecx
        pop     edi
        jmp     L_c28a
    L_c282:
        and     dword ptr [eax + 8], 0
        push    ecx
        call    ebx
        pop     ecx
    L_c28a:
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [esi + 0x54], eax
    L_c290:
        or      eax, 0xffffffff
        jmp     L_c29e
    L_c295:
        push    dword ptr [ebp + 0xc]
        call    dword ptr [g_10049138]
    L_c29e:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
