/*
 * data_00567237.c block (util) -- 314 bytes. Token/stream parser: walks a
 * linked list (0x805930), reads bytes from a string cursor (0x805918),
 * dispatches through FUN_0064C950 / FUN_0064DB40, and stores a parsed value
 * into a global (0x80d960), with a callback (FUN_00620890) when a flag
 * (0x7f2ba8) is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058e0;
extern int g_80d960;
extern int g_805930;
extern int g_8058c0;
extern int g_805918;
extern int g_805908;
extern void __cdecl FUN_0064C950(void);
extern void __cdecl FUN_0064DB40(void);
extern int g_80d9b4;
extern int g_80d9bc;
extern int g_80592c;
extern int g_7f2ba8;
extern void __cdecl FUN_00620890(void);
extern char g_7b5a8c;
extern char g_80d969;
extern char g_7b5a8d[];

__declspec(naked) void FUN_00567240(void)
{
    __asm {
        mov     eax, dword ptr [g_8058e0]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x3c]
        test    ebp, ebp
        mov     dword ptr [g_80d960], 0
        je      L567358
        mov     ebx, dword ptr [g_805930]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x44]
        mov     eax, dword ptr [g_8058c0]
        sub     eax, ecx
        dec     eax
        mov     edx, eax
        dec     eax
        test    edx, edx
        jle     L56727D
        inc     eax
L567277:
        dec     eax
        mov     ebx, dword ptr [ebx + 4]
        jne     L567277
L56727D:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        push    esi
        inc     eax
        push    ebp
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064C950
        mov     esi, eax
        mov     eax, dword ptr [g_805918]
        movsx   edx, byte ptr [eax]
        add     esp, 4
        inc     eax
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        cmp     ebp, dword ptr [g_80d9b4]
        jne     L5672DC
        push    eax
        call    FUN_0064C950
        mov     ecx, dword ptr [g_80d9bc]
        add     esp, 4
        cmp     eax, ecx
        jne     L5672DC
        mov     eax, dword ptr [g_80592c]
        fild    dword ptr [eax]
        fstp    dword ptr [ebx]
        jmp     L567325
L5672DC:
        mov     eax, dword ptr [ebp + 4]
        cmp     eax, 3
        jne     L567303
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [g_80592c]
        mov     esi, dword ptr [edx]
        mov     eax, ecx
        push    edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        jmp     L567325
L567303:
        cmp     esi, dword ptr [g_80d9bc]
        je      L56731C
        cmp     eax, 2
        je      L56731C
        mov     ecx, dword ptr [g_80592c]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx], edx
        jmp     L567325
L56731C:
        mov     eax, dword ptr [g_80592c]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx], ecx
L567325:
        mov     ecx, dword ptr [g_80592c]
        mov     edx, dword ptr [ebx]
        sub     ecx, 4
        mov     dword ptr [g_80592c], ecx
        mov     ecx, dword ptr [g_7f2ba8]
        test    ecx, ecx
        mov     dword ptr [g_80d960], edx
        pop     esi
        je      L567358
        mov     eax, dword ptr [g_8058e0]
        mov     edx, dword ptr [eax + 0x3c]
        push    ebp
        push    ebx
        push    edx
        push    eax
        call    FUN_00620890
L567358:
        movsx   eax, byte ptr [g_7b5a8c]
        pop     ebp
        mov     dword ptr [g_805908], eax
        mov     byte ptr [g_80d969], 1
        mov     dword ptr [g_805918], offset g_7b5a8d
        xor     eax, eax
        pop     ebx
        ret
    }
}
