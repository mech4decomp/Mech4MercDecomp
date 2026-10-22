/*
 * FUN_00516d70 (148 B) — Count user mission files
 * __fastcall (ECX = string parameter)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
void __cdecl FUN_00412570(const char *str);
int __cdecl FUN_0041d890(int param, int flag);
void __cdecl FUN_0041dac0(void);

__declspec(naked) void func_00516d70(void)
{
    

extern int DAT_007f1fb8;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007f1fb8]
        mov     eax, dword ptr [eax + 0x10]
        push    edi
        xor     edi, edi
loop_start:
        test    eax, eax
        jz      loop_done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x04]
        jz      loop_done
        mov     edx, dword ptr [ecx + 0x18]
        test    edx, edx
        jle     loop_start
        inc     edi
        jmp     loop_start
loop_done:
        push    esi
        push    0x779D80
        lea     ecx, [esp + 0x0C]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      null_obj
        mov     ecx, dword ptr [esp + 0x08]
        push    0x01
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        jmp     after_null
null_obj:
        xor     esi, esi
after_null:
        mov     edx, dword ptr [esi + 0x1C]
        lea     ecx, [esi + 0x1C]
        call    dword ptr [edx+0x10]
        add     edi, eax
        test    esi, esi
        jz      skip_free
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_free:
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        pop     esi
        jz      skip_dec
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec:
        mov     eax, edi
        pop     edi
        pop     ecx
        ret
    }


}
