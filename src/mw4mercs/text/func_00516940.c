/*
 * FUN_00516940 (144 B) — Global initialization function
 * Allocates and initializes objects, sets up global state.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
int __cdecl FUN_004cc3c0(void);
void __cdecl FUN_004c8eb0(int obj, int type);
int __cdecl FUN_00612080(void);

__declspec(naked) void func_00516940(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f27dc;
extern int DAT_00858a3c;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        jnz     skip_alloc1
        push    0x1C18
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      null_ret1
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     after_null1
null_ret1:
        xor     eax, eax
after_null1:
        push    0x05
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x08
skip_alloc1:
        mov ecx, dword ptr [DAT_007f27dc]
        test    ecx, ecx
        jz      skip_delete
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f27dc], 0x0
skip_delete:
        push    0x44
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      null_ret2
        mov     ecx, eax
        call    FUN_00612080
        jmp     after_null2
null_ret2:
        xor     eax, eax
after_null2:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov dword ptr [DAT_007f27dc], eax
        call    dword ptr [edx + 0x08]
        mov dword ptr [DAT_00858a3c], 0x60cff0
        mov     eax, 0x01
        ret
    }


}
