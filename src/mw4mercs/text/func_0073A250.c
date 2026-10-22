/*
 * FUN_0073A250 (144 B) — __cdecl (no args, RET 0). Iterates a table at
 * 0x856A8C (count at 0x856A88); for each non-null entry either calls
 * FUN_00756940 and, if it returns true, marks [eax+0x76]=1 and calls
 * FUN_00757C70 with the entry's first dword, or (if [ecx]==0 or the
 * check fails) checks [ecx+0x9C]==4 and calls FUN_00749C30. Sets
 * byte 0x857F31=1 at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858990;
extern int g_856b94;
extern int g_856a88;
extern char g_857f31;
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00757C70(void);
extern void __cdecl FUN_00749C30(void);

__declspec(naked) void FUN_0073A250(void)
{
    __asm {
        mov     al, byte ptr [g_858990]
        push    ebx
        mov     bl, 1
        cmp     al, bl
        je      loc_73a2d9
        mov     eax, dword ptr [g_856b94]
        test    eax, eax
        je      loc_73a2d9
        mov     eax, dword ptr [g_856a88]
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     loc_73a2d2
        push    esi
        mov     esi, 0x856a8c
loc_73a277:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        je      loc_73a2c4
        cmp     dword ptr [ecx], 0
        je      loc_73a29a
        call    FUN_00756940
        test    al, al
        je      loc_73a29a
        mov     eax, dword ptr [esi]
        mov     byte ptr [eax + 0x76], bl
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_00757C70
        jmp     loc_73a2c4
loc_73a29a:
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx + 0x9c], 4
        jne     loc_73a2c4
        call    FUN_00756940
        test    al, al
        je      loc_73a2c4
        mov     eax, dword ptr [esi]
        mov     byte ptr [eax + 0x76], bl
        mov     ecx, dword ptr [eax + 0x70]
        mov     edx, dword ptr [ecx + 0xec]
        push    2
        push    edx
        call    FUN_00749C30
loc_73a2c4:
        mov     eax, dword ptr [g_856a88]
        inc     edi
        add     esi, 4
        cmp     edi, eax
        jl      loc_73a277
        pop     esi
loc_73a2d2:
        mov     byte ptr [g_857f31], bl
        pop     edi
loc_73a2d9:
        pop     ebx
        ret
    }
}
