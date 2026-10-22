/*
 * FUN_0053f140 (197 B) — Mission state check and update function.
 *
 * __fastcall (ECX = this), RET 8 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006272D0(void);
extern void __cdecl FUN_006270D0(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0062C5F0(void);
extern void __cdecl FUN_0054BBA0(void);

__declspec(naked) void __fastcall FUN_0053f140(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [ecx + 0x54]
        mov     edx, dword ptr [eax + 0xA8]
        test    edx, edx
        jz      skip_conditional

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [eax + 0x0C]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        test    al, al
        jnz     skip_conditional

        mov     eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 0x2C]       ; this->vtable_method(0)

    skip_conditional:
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        ; xor edx, dword ptr [0x007DAB40]
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x40]
        jz      skip_second_block

        mov     ecx, dword ptr [eax]
        push    0
        xor     ecx, 0x85739531
        call    FUN_006272D0

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        ; mov ecx, dword ptr [0x007DAB40]
        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        push    0
        push    0
        xor     ecx, 0x85739531
        call    FUN_006270D0

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [ecx]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x40]
        push    0x17
        xor     ecx, 0x85739531
        call    FUN_00629290

        mov     ecx, eax
        call    FUN_0062C5F0

    skip_second_block:
        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        ; mov ecx, dword ptr [0x007DAB40]
        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x2C]
        xor     ecx, 0x85739531
        call    FUN_0054BBA0

        ret     8
    }


}
