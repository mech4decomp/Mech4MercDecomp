/*
 * FUN_005168B0 (144 B) — Game state initialization function
 * Allocates and initializes a game state object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * __cdecl FUN_004084d0(int size);
void * __cdecl FUN_004cc3c0(void *this);
void __cdecl FUN_004c8eb0(void *ptr, int id);
void * __cdecl FUN_00609d20(void *this);

__declspec(naked) void func_005168b0(void)
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
        jnz     skip_init_alloc
        push    0x1C18
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     after_alloc
alloc_fail:
        xor     eax, eax
after_alloc:
        push    0x05
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x08
skip_init_alloc:
        mov ecx, dword ptr [DAT_007f27dc]
        test    ecx, ecx
        jz      skip_free
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f27dc], 0x0
skip_free:
        push    0x44
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail_2
        mov     ecx, eax
        call    FUN_00609d20
        jmp     after_alloc_2
alloc_fail_2:
        xor     eax, eax
after_alloc_2:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov dword ptr [DAT_007f27dc], eax
        call    dword ptr [edx + 0x08]
        mov dword ptr [DAT_00858a3c], 0x60cff0
        mov     eax, 0x01
        ret
    }


}
