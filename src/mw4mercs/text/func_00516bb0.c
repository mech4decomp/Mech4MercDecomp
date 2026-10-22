/*
 * FUN_00516bb0 (443 B) — String path construction helper
 * Builds a path string based on whether the input contains "UserMissions".
 * __thiscall (ECX = this pointer)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

char * __cdecl strstr(const char *str, const char *substr);
void __cdecl FUN_004084e0(void *ptr);
void __cdecl FUN_004125e0(int a, int b);
void __cdecl FUN_00412740(int a);
void __cdecl FUN_00412780(const char *str);

__declspec(naked) void func_00516bb0(void)
{
    

extern int DAT_0076b298;
__asm {
sub     esp, 0x08
        push    esi
        mov     esi, dword ptr [ecx + 0x40970]
        push    0x779E40
        push    esi
        mov     dword ptr [esp + 0x0C], 0x00
        call dword ptr [DAT_0076b298]
        add     esp, 0x08
        test    eax, eax
        jnz     has_usermissions
        push    0x779E34
        lea     ecx, [esp + 0x08]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x04]
        push    esi
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      skip_free1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free1:
        mov     ecx, dword ptr [esp + 0x04]
        push    0x76C5A8
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      skip_free2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free2:
        mov     edx, dword ptr [esp + 0x04]
        push    esi
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      skip_free3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free3
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free3:
        mov     eax, dword ptr [esp + 0x04]
        push    0x776484
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      done_concat
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_concat
        jmp     free_last
has_usermissions:
        push    esi
        lea     ecx, [esp + 0x08]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x04]
        push    0x76C5A8
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      skip_free4
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free4
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free4:
        mov     edx, dword ptr [esp + 0x04]
        push    0x776484
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x08]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      done_concat
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_concat
free_last:
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
done_concat:
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [esi], eax
        jz      skip_inc
        inc     byte ptr [eax - 0x01]
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        jz      skip_inc
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_inc
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_inc:
        mov     eax, esi
        pop     esi
        add     esp, 0x08
        ret     0x04
    }


}
