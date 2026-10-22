/*
 * FUN_005149B0 (149 B) — Look up a string by index and copy it
 * Validates index (0-254), looks up string from an obfuscated table,
 * allocates a buffer, copies the string.
 *
 * __stdcall, RET 0xC
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * __cdecl FUN_004cdfa0(int index);
void __cdecl FUN_006f4230(void *ptr);
void * __cdecl FUN_006f3c80(int size, int flags);

__declspec(naked) void func_005149b0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        push    edi
        jge     check_upper
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x0C

check_upper:
        cmp     ecx, 0xFF
        jl      valid_index
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x0C

valid_index:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     edi, eax
        test    edi, edi
        jnz     found_entry
        pop     edi
        pop     esi
        ret     0x0C

found_entry:
        mov     esi, dword ptr [esi + 0x04]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_006f4230
skip_free:
        push    0x00
        push    0x100
        call    FUN_006f3c80
        mov     edi, dword ptr [edi + 0x30]
        or      ecx, -1
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x01
        pop     esi
        ret     0x0C
    }


}
