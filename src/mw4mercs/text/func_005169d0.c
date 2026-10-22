/*
 * FUN_005169d0 (173 B) — Global shutdown/cleanup function
 * Releases objects and resets global state.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004c8e90(int type);
void __cdecl FUN_004ceb20(void);

__declspec(naked) void func_005169d0(void)
{
    

extern int DAT_007f27dc;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
extern int DAT_00858a3c;
__asm {
        mov ecx, dword ptr [DAT_007f27dc]
        test    ecx, ecx
        jz      done
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x14]
        xor     edx, 0x85739531
        jz      check_flag
        mov     edx, dword ptr [eax + 0x0C]
        xor     edx, 0x85739531
        push    ebx
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        pop     ebx
        jnz     check_flag
        mov     eax, dword ptr [eax + 0x14]
        xor     eax, 0x85739531
        jz      call_8e90
        mov     edx, dword ptr [eax]
        push    0x01
        mov     ecx, eax
        call    dword ptr [edx]
call_8e90:
        push    0x05
        call    FUN_004c8e90
        mov ecx, dword ptr [DAT_007f27dc]
        add     esp, 0x04
check_flag:
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x0C]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax + 0x17]
        test    dl, dl
        jz      skip_ceb20
        mov ecx, dword ptr [DAT_007db090]
        call    FUN_004ceb20
        mov ecx, dword ptr [DAT_007f27dc]
skip_ceb20:
        test    ecx, ecx
        jz      zero_fields
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
zero_fields:
        mov dword ptr [DAT_007f27dc], 0x0
        mov dword ptr [DAT_00858a3c], 0x537fc0
done:
        mov     eax, 0x01
        ret
    }


}
