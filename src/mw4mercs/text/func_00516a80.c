/*
 * FUN_00516a80 (162 B) — Global initialization function (variant 2)
 * Allocates and initializes objects, manages DAT_007f27d0.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
int __cdecl FUN_004cc3c0(void);
void __cdecl FUN_004c8eb0(int obj, int type);
int __cdecl FUN_00607fd0(void);
void __cdecl FUN_00608020(void);
void __cdecl FUN_00608050(void);

__declspec(naked) void func_00516a80(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f27d0;
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
        push    esi
        mov esi, dword ptr [DAT_007f27d0]
        test    esi, esi
        jz      skip_delete
        mov     ecx, esi
        call    FUN_00608020
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
        mov dword ptr [DAT_007f27d0], 0x0
skip_delete:
        push    0x40
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        pop     esi
        jz      null_ret2
        mov     ecx, eax
        call    FUN_00607fd0
        mov     ecx, eax
        mov dword ptr [DAT_007f27d0], eax
        call    FUN_00608050
        mov     eax, 0x01
        ret
null_ret2:
        xor     eax, eax
        mov     ecx, eax
        mov dword ptr [DAT_007f27d0], eax
        call    FUN_00608050
        mov     eax, 0x01
        ret
    }


}
