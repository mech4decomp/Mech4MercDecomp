/*
 * FUN_00516380 (743 B) — Game state initialization function
 * Initializes campaign data, loads campaign files, sets up
 * various game state fields.
 *
 * __fastcall (ECX = this pointer)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * __cdecl FUN_004084d0(int size);
void * __cdecl FUN_004cc3c0(void *this);
void __cdecl FUN_004c8eb0(void *ptr, int id);
void __cdecl FUN_004c8e90(int id);
void * __cdecl FUN_005363b0(int arg);
void * __cdecl FUN_00595c20(const char *str);
void * __cdecl FUN_0059f490(void *ptr, int arg);
void * __cdecl FUN_0059e3b0(void *ptr, int arg);
void * __cdecl FUN_00516d70(void *this);
void * __cdecl FUN_00517dd0(void *this);

__declspec(naked) void func_00516380(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f1fb8;
extern int DAT_007f1fbc;
extern int DAT_007f1fc0;
extern int DAT_007f1fc4;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        push    edi
        mov     edi, 0
        jnz     skip_init_alloc
        push    0x1C18
        call    FUN_004084d0
        add     esp, 0x04
        cmp     eax, edi
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
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0C]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x50]
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax + 0x04]
        mov     ecx, dword ptr [esi + 0x40EE8]
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        push    ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x0C]
        xor     ecx, 0x85739531
        call    FUN_005363b0
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0x0C]
        mov     ecx, dword ptr [eax + 0x0C]
        xor     edx, 0x85739531
        mov     dword ptr [edx+0xAC], edi
        mov     edx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        xor     edx, 0x85739531
        mov     dword ptr [ecx+0x3028], edi
        jz      skip_free_1
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        jz      skip_call_1
        mov     edx, dword ptr [eax]
        push    0x01
        mov     ecx, eax
        call    dword ptr [edx]
skip_call_1:
        push    0x11
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_1:
        mov ecx, dword ptr [DAT_007f1fb8]
        cmp     ecx, edi
        jz      skip_free_2
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f1fb8], edi
skip_free_2:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x30]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x30]
        jz      skip_free_3
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_2
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
skip_call_2:
        push    0x0C
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_3:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x3C]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x3C]
        jz      skip_free_4
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_3
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
skip_call_3:
        push    0x0F
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_4:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x34]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x34]
        jz      skip_free_5
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_4
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
skip_call_4:
        push    0x0D
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_5:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x38]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x38]
        jz      skip_free_6
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_5
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
skip_call_5:
        push    0x0E
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_6:
        mov ecx, dword ptr [DAT_007f1fbc]
        cmp     ecx, edi
        jz      skip_free_7
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fbc], edi
skip_free_7:
        mov ecx, dword ptr [DAT_007f1fc0]
        cmp     ecx, edi
        jz      skip_free_8
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f1fc0], edi
skip_free_8:
        mov ecx, dword ptr [DAT_007f1fc4]
        cmp     ecx, edi
        jz      skip_free_9
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fc4], edi
skip_free_9:
        push    0x00779E08
        call    FUN_00595c20
        push    0x00779DE4
        mov dword ptr [DAT_007f1fb8], eax
        call    FUN_00595c20
        push    0x00779DC4
        mov dword ptr [DAT_007f1fbc], eax
        call    FUN_00595c20
        push    0x00779D9C
        mov dword ptr [DAT_007f1fc0], eax
        call    FUN_00595c20
        add     esp, 0x10
        push    0x0C
        push    0x007DB0AC
        mov dword ptr [DAT_007f1fc4], eax
        call    FUN_0059f490
        add     esp, 0x04
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x08
        push    0x0F
        push    0x007DB0AC
        call    FUN_0059e3b0
        add     esp, 0x04
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x08
        mov     ecx, esi
        call    FUN_00516d70
        mov     ecx, esi
        mov     dword ptr [esi + 0x4099C], eax
        call    FUN_00517dd0
        mov edx, dword ptr [DAT_007dab40]
        mov     dword ptr [esi + 0x409A0], eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x0C]
        mov     dword ptr [esi + 0x40EAC], edi
        mov     dword ptr [esi + 0x40EB0], edi
        mov     dword ptr [esi + 0x40EE0], edi
        xor     edx, 0x85739531
        pop     edi
        mov     dword ptr [esi + 0x40EA8], 0x01
        mov     dword ptr [esi + 0x40EB4], 0x01
        mov     dword ptr [edx+0x3024], 1
        mov     eax, 0x01
        pop     esi
        ret
    }


}
