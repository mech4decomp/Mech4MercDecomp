/* FUN_0056f5f0 (0x0056F5F0, 380 bytes) */
/* __cdecl, naked inline asm */

__declspec(naked) unsigned int __cdecl FUN_0056f5f0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db28(void);
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566bba(void);
extern void __cdecl FUN_100566689(void);
extern void __cdecl FUN_006faba3(void);
extern void __cdecl FUN_0064dad2(void);
extern void __cdecl FUN_0064c8dc(void);
extern int DAT_0080d9bc;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10056660b(void);
extern void __cdecl FUN_006fab25(void);
extern void __cdecl FUN_1005665e5(void);
extern void __cdecl FUN_006faaff(void);
extern void __cdecl FUN_0060ff95(void);
extern int DAT_00805928;
extern void __cdecl FUN_100562f1a(void);
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db28
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_debug_check1

        push    edi
        call FUN_100566bba
        add     esp, 0x4
        test    al, al
        jz      after_debug_check1

        push    0x780578
        call FUN_100566689
        push    eax
        call FUN_006faba3
        add     esp, 0x8
        test    eax, eax
        jz      after_debug_check1
        int     3

after_debug_check1:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064dad2
        push    eax
        call FUN_0064c8dc
        mov ecx, dword ptr [DAT_0080d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        mov eax, dword ptr [DAT_0080592c]
        jnz     skip_fild

        fild    dword ptr [eax]
        fstp    dword ptr [eax]

skip_fild:
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab44]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [eax + 0x20]
        mov al, byte ptr [DAT_007dde2c]
        xor     esi, 0x85739531
        test    al, al
        mov     dword ptr [ebp - 0x4], ecx
        jz      after_debug_check2

        test    edi, edi
        jge     debug_check2b

        push    0x780540
        call FUN_10056660b
        push    eax
        call FUN_006fab25
        add     esp, 0x8
        test    eax, eax
        jz      debug_check2b
        int     3

debug_check2b:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_debug_check2

        cmp     edi, 0x20
        jl      after_debug_check2

        push    0x780504
        call FUN_1005665e5
        push    eax
        call FUN_006faaff
        add     esp, 0x8
        test    eax, eax
        jz      after_debug_check2
        int     3

after_debug_check2:
        lea     ecx, [edi + edi*2]
        shl     ecx, 0x4
        lea     ecx, [ecx + esi*1 + 0x1bb8]
        call FUN_0060ff95
        fld     dword ptr [ebp - 0x4]
        fcompp
        fnstsw ax
        test    ah, 0x41
        jnz     not_less

        mov     ebx, 0x1
        jmp     after_compare

not_less:
        xor     ebx, ebx

after_compare:
        mov esi, dword ptr [DAT_0080592c]
        mov edx, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov dword ptr [DAT_0080592c], esi
        jc      no_overflow

        push    0x0
        call FUN_100562f1a
        add     esp, 0x4

no_overflow:
        xor     eax, eax
        test    bl, bl
        setnz   al
        pop     edi
        mov     dword ptr [esi], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
