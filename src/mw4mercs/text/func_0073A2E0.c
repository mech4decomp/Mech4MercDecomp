/*
 * FUN_0073A2E0 (148 B) — __cdecl (no args, RET 0). Iterates the table at
 * 0x856A8C (count at 0x856A88); for each entry that is marked
 * ([eax+0x76]!=0) either clears the mark and calls FUN_00757F00, or (if
 * [eax+0x9C]==4) clears the mark and calls FUN_00749C30. Sets byte
 * 0x857F31=0 at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858990;
extern int g_856b94;
extern char g_8aadbc;
extern int g_856a88;
extern char g_857f31;
extern void __cdecl FUN_00757F00(void);
extern void __cdecl FUN_00749C30(void);

__declspec(naked) void FUN_0073A2E0(void)
{
    __asm {
        cmp     byte ptr [g_858990], 1
        push    ebx
        je      loc_73a372
        mov     eax, dword ptr [g_856b94]
        xor     ebx, ebx
        cmp     eax, ebx
        je      loc_73a372
        cmp     byte ptr [g_8aadbc], bl
        jne     loc_73a372
        mov     eax, dword ptr [g_856a88]
        push    esi
        xor     esi, esi
        cmp     eax, ebx
        jle     loc_73a36b
        push    edi
        mov     edi, 0x856a8c
loc_73a313:
        mov     eax, dword ptr [edi]
        cmp     dword ptr [eax], ebx
        je      loc_73a33b
        cmp     byte ptr [eax + 0x76], bl
        je      loc_73a33b
        mov     byte ptr [eax + 0x76], bl
        mov     dl, byte ptr [eax + 0x80]
        xor     ecx, ecx
        cmp     dl, bl
        mov     edx, dword ptr [eax]
        setne   cl
        push    ecx
        push    ebx
        push    ebx
        push    edx
        call    FUN_00757F00
        jmp     loc_73a35d
loc_73a33b:
        cmp     dword ptr [eax + 0x9c], 4
        jne     loc_73a35d
        cmp     byte ptr [eax + 0x76], bl
        je      loc_73a35d
        mov     byte ptr [eax + 0x76], bl
        mov     eax, dword ptr [eax + 0x70]
        mov     ecx, dword ptr [eax + 0xec]
        push    3
        push    ecx
        call    FUN_00749C30
loc_73a35d:
        mov     eax, dword ptr [g_856a88]
        inc     esi
        add     edi, 4
        cmp     esi, eax
        jl      loc_73a313
        pop     edi
loc_73a36b:
        mov     byte ptr [g_857f31], bl
        pop     esi
loc_73a372:
        pop     ebx
        ret
    }
}
