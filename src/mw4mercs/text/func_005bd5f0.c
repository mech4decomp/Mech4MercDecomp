/*
 * FUN_005bd5f0 (127 B) - __fastcall (ECX = this).
 *
 * Iterates a list of objects; for each with byte[0x93a]!=0 and
 * (float)time - float[0x93c] > 0x76d5f0, clears byte[0x93a] and dword[0x93c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416bc0(void *p);
extern float __stdcall FUN_00707e70(int a);
extern void *__fastcall FUN_00416cc0(void *p);
extern void __fastcall FUN_00416c60(void *p);

__declspec(naked) void __fastcall FUN_005bd5f0(void *this)
{
    

extern int DAT_0076d5f0;
__asm {
sub     esp, 0x18
        add     ecx, 0x4b0
        push    ebx
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_00416bc0
        xor     ebx, ebx
        push    ebx
        mov     dword ptr [esp + 0xc], 0x77d098
        call    FUN_00707e70
        fstp    dword ptr [esp + 0x4]
        lea     ecx, [esp + 0x8]
        call    FUN_00416cc0
        mov     ecx, eax
        cmp     ecx, ebx
        jz      done
loop1:
        cmp     byte ptr [ecx + 0x93a], bl
        jz next1
        fld     dword ptr [esp + 0x4]
        fsub    dword ptr [ecx + 0x93c]
        fcomp dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     next1
        mov     byte ptr [ecx + 0x93a], bl
        mov     dword ptr [ecx + 0x93c], ebx
next1:
        lea     ecx, [esp + 0x8]
        call    FUN_00416cc0
        mov     ecx, eax
        cmp     ecx, ebx
        jnz loop1
done:
        lea     ecx, [esp + 0x8]
        call    FUN_00416c60
        pop     ebx
        add     esp, 0x18
        ret
    }


}
