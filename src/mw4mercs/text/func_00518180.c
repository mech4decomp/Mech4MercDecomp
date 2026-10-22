/*
 * FUN_00518180 (255 B) — Variant file path construction
 * Builds variant file paths and stores data.
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084e0(void *ptr);
int __cdecl FUN_004125e0(int a, int b);
int __cdecl FUN_00412740(int a);
int __cdecl FUN_00412780(const char *str);

__declspec(naked) void func_00518180(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     edx, dword ptr [esp + 0x04]
        mov     eax, dword ptr [edx + 0x04]
        mov     edx, dword ptr [edx + 0x08]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esi + 0x409A4]
        lea     eax, [eax + ecx * 0x04]
        push    edi
        mov     di, word ptr [eax]
        mov     ax, word ptr [eax + 0x02]
        mov     word ptr [esi + 0x4097E], ax
        mov eax, dword ptr [DAT_007dab44]
        mov     word ptr [esi + 0x4097C], di
        mov     edi, dword ptr [edx]
        mov     edx, dword ptr [eax]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x0C]
        xor     eax, 0x85739531
        mov     dword ptr [eax + 0xC4], ecx
        push    0x76B768
        lea     ecx, [eax + 0xC8]
        call    FUN_00412780
        mov     ax, word ptr [esi + 0x4097C]
        cmp ax, word ptr [DAT_007db0ac]
        jnz     done
        mov     cx, word ptr [esi + 0x4097E]
        cmp cx, word ptr [DAT_007db0ae]
        jnz     done
        add     esi, 0x40978
        push    0x76C724
        mov     ecx, esi
        call    FUN_00412780
        mov     edx, dword ptr [esi]
        push    edi
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x0C]
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
        mov     eax, dword ptr [esi]
        push    0x779F4C
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x0C]
        test    eax, eax
        jz      done
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
done:
        pop     edi
        mov     eax, 0x01
        pop     esi
        ret     0x08
    }


}
