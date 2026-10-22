// Auto-generated: FUN_0050c9d0, 398 bytes, __fastcall (ECX = this)
// FUN_0050c9d0
// Loads joystick throttle configuration from options.ini

void FUN_0040DCA0(int, int, int);
int FUN_0040ECC0(int);
int FUN_0040EDC0(int);
int FUN_00411D60(int, void*, int);
void FUN_00411DF0(int, float);
int FUN_00411EC0(int, void*, int);
void FUN_00411F50(int, int);
void FUN_0040E4A0(void);
void FUN_0040DE20(void);

__declspec(naked) void func_0050c9d0(void)
{
    __asm {
        sub     esp, 58h
        push    ebx
        push    esi
        push    edi
        push    1
        push    0
        mov     edi, ecx
        push    76C6B4h                 ; "options.ini"
        lea     ecx, [esp+20h]
        xor     bl, bl
        call    FUN_0040DCA0
        push    77792Ch                 ; "joystick"
        lea     ecx, [esp+18h]
        call    FUN_0040ECC0
        mov     esi, eax
        test    esi, esi
        jnz     loc_50CA12

        push    77792Ch                 ; "joystick"
        lea     ecx, [esp+18h]
        call    FUN_0040EDC0
        mov     esi, eax
        mov     bl, 1

loc_50CA12:
        push    0
        lea     eax, [esp+14h]
        push    eax
        push    777958h                 ; "BiThrottleCenter"
        mov     ecx, esi
        call    FUN_00411D60
        test    al, al
        jnz     loc_50CA3C

        push    3E99999Ah               ; 0.3f
        push    777958h                 ; "BiThrottleCenter"
        mov     ecx, esi
        call    FUN_00411DF0
        mov     bl, 1

loc_50CA3C:
        push    0
        lea     ecx, [esp+14h]
        push    ecx
        push    777948h                 ; "BiThrottleLow"
        mov     ecx, esi
        call    FUN_00411D60
        test    al, al
        jnz     loc_50CA66

        push    3E800000h               ; 0.25f
        push    777948h                 ; "BiThrottleLow"
        mov     ecx, esi
        call    FUN_00411DF0
        mov     bl, 1

loc_50CA66:
        push    0
        lea     edx, [esp+14h]
        push    edx
        push    777938h                 ; "BiThrottleHigh"
        mov     ecx, esi
        call    FUN_00411D60
        test    al, al
        jnz     loc_50CA90

        push    3D75C28Fh               ; 0.06f
        push    777938h                 ; "BiThrottleHigh"
        mov     ecx, esi
        call    FUN_00411DF0
        mov     bl, 1

loc_50CA90:
        push    0
        lea     eax, [esp+14h]
        push    eax
        push    77797Ch                 ; "OneThrottleCenter"
        mov     ecx, esi
        call    FUN_00411D60
        test    al, al
        jnz     loc_50CABA

        push    3E99999Ah               ; 0.3f
        push    77797Ch                 ; "OneThrottleCenter"
        mov     ecx, esi
        call    FUN_00411DF0
        mov     bl, 1

loc_50CABA:
        push    0
        lea     ecx, [esp+14h]
        push    ecx
        push    77796Ch                 ; "OneThrottleHigh"
        mov     ecx, esi
        call    FUN_00411D60
        test    al, al
        jnz     loc_50CAE4

        push    3D75C28Fh               ; 0.06f
        push    77796Ch                 ; "OneThrottleHigh"
        mov     ecx, esi
        call    FUN_00411DF0
        mov     bl, 1

loc_50CAE4:
        push    0
        lea     edx, [esp+13h]
        push    edx
        push    77791Ch                 ; "OneWayThrottle"
        mov     ecx, esi
        call    FUN_00411EC0
        test    al, al
        jnz     loc_50CB0B

        push    0
        push    77791Ch                 ; "OneWayThrottle"
        mov     ecx, esi
        call    FUN_00411F50
        jmp     loc_50CB0F

loc_50CB0B:
        test    bl, bl
        jz      loc_50CB18

loc_50CB0F:
        lea     ecx, [esp+14h]
        call    FUN_0040E4A0

loc_50CB18:
        push    0
        lea     eax, [edi+30h]
        push    eax
        push    777958h                 ; "BiThrottleCenter"
        mov     ecx, esi
        call    FUN_00411D60

        push    0
        lea     ecx, [edi+34h]
        push    ecx
        push    777948h                 ; "BiThrottleLow"
        mov     ecx, esi
        call    FUN_00411D60

        push    0
        add     edi, 38h
        push    edi
        push    777938h                 ; "BiThrottleHigh"
        mov     ecx, esi
        call    FUN_00411D60

        lea     ecx, [esp+14h]
        call    FUN_0040DE20

        pop     edi
        pop     esi
        pop     ebx
        add     esp, 58h
        ret
    }
}
