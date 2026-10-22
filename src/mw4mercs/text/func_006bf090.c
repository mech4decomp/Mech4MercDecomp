/* FUN_006bf090 - gosScript anim/script table init */

extern int g_82e21c;                /* 0x0082e21c */
extern unsigned char g_82ed57;      /* 0x0082ed57 */
extern unsigned char g_82ed38;      /* 0x0082ed38 */
extern unsigned char g_82ed1c;      /* 0x0082ed1c */
extern unsigned char g_82eb57;      /* 0x0082eb57 */
extern unsigned char g_82eb38;      /* 0x0082eb38 */
extern unsigned char g_82eb1c;      /* 0x0082eb1c */
extern unsigned char g_82ec57;      /* 0x0082ec57 */
extern int g_82eb28;                /* 0x0082eb28 */
extern int g_82eb2c;                /* 0x0082eb2c */
extern int g_82ec28;                /* 0x0082ec28 */
extern int g_82ec2c;                /* 0x0082ec2c */
extern unsigned short g_82eb30;     /* 0x0082eb30 */
extern unsigned short g_82ec30;     /* 0x0082ec30 */
extern int g_7b60b4;                /* 0x007b60b4 */
extern int g_82f348;                /* 0x0082f348 */
extern int g_82eaf4;                /* 0x0082eaf4 */
extern int g_82f3c0;                /* 0x0082f3c0 */
extern int g_82f3c8;                /* 0x0082f3c8 */
extern int g_82f3cc;                /* 0x0082f3cc */
extern int g_82f3d4;                /* 0x0082f3d4 */
extern int g_82f3d8;                /* 0x0082f3d8 */
extern int g_82f3d0;                /* 0x0082f3d0 */

extern void __cdecl FUN_006f3c80(void);

void __declspec(naked) func_006bf090(void)
{
    __asm {
        xor eax, eax
        push esi
        push edi
        mov ecx, 0x40
        mov edi, 0x82ecf8
        rep stosd
        mov ecx, 0x40
        mov edi, 0x82ebf8
        rep stosd
        mov ecx, 0x40
        mov edi, 0x82eaf8
        rep stosd
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82eb59
        rep stosd
        stosw
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82ec59
        rep stosd
        stosw
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82ed59
        rep stosd
        stosw
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82eb39
        rep stosd
        stosw
        mov edx, dword ptr [g_82e21c]
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82ec39
        rep stosd
        stosw
        mov ecx, 0x6
        mov eax, 0x1010101
        mov edi, 0x82ed39
        rep stosd
        stosw
        mov al, 0x1
        mov byte ptr [g_82ed57], al
        mov byte ptr [g_82ed38], al
        mov byte ptr [g_82ed1c], al
        mov byte ptr [g_82eb57], al
        mov byte ptr [g_82eb38], al
        mov byte ptr [g_82eb1c], al
        mov byte ptr [g_82ec57], al
        mov eax, 0x1010101
        mov dword ptr [g_82eb28], eax
        mov dword ptr [g_82eb2c], eax
        mov ecx, eax
        mov dword ptr [g_82ec28], ecx
        push edx
        mov dword ptr [g_82ec2c], ecx
        xor esi, esi
        push 0x80
        mov dword ptr [g_7b60b4], 0xffffffff
        mov word ptr [g_82eb30], ax
        mov word ptr [g_82ec30], cx
        mov dword ptr [g_82f348], esi
        mov dword ptr [g_82eaf4], 0x20
        call FUN_006f3c80
        mov dword ptr [g_82f3c0], eax
        mov dword ptr [eax], esi
        mov eax, dword ptr [g_82e21c]
        push eax
        push 0xc
        call FUN_006f3c80
        mov ecx, dword ptr [g_82e21c]
        push ecx
        push 0xc
        mov dword ptr [g_82f3c8], eax
        call FUN_006f3c80
        mov dword ptr [g_82f3cc], eax
        mov eax, dword ptr [g_82f3c8]
        mov dword ptr [eax], esi
        mov dword ptr [eax+0x4], esi
        mov edx, dword ptr [g_82e21c]
        push edx
        push 0xc
        mov dword ptr [eax+0x8], esi
        call FUN_006f3c80
        pop edi
        mov dword ptr [g_82f3d4], esi
        mov dword ptr [g_82f3d8], esi
        mov dword ptr [g_82f3d0], eax
        pop esi
        ret
    }
}
